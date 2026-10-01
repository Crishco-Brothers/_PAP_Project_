#include <stdio.h>
#include "employees.h"
#include "input.h"

#define MAX_EMP 100
#define TEXT_SIZE 50

static int ids[MAX_EMP];
static char names[MAX_EMP][TEXT_SIZE];
static char depts[MAX_EMP][TEXT_SIZE];
static float basic[MAX_EMP];
static float housing[MAX_EMP];
static float transport[MAX_EMP];
static int count = 0;

static int findEmployeeById(int id)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (ids[i] == id)
        {
            return i;
        }
    }
    return -1;
}

static void addEmployee(void)
{
    int id;
    float basicSalary;
    float housingAllowance;
    float transportAllowance;

    if (count >= MAX_EMP)
    {
        printf("Error: Employee register is full.\n");
        return;
    }

    id = readInt("Enter Employee ID: ");
    if (id <= 0)
    {
        printf("Error: Employee ID must be greater than zero.\n");
        return;
    }
    if (findEmployeeById(id) != -1)
    {
        printf("Error: An employee with that ID already exists.\n");
        return;
    }

    readString("Enter Name: ", names[count], TEXT_SIZE);
    readString("Enter Department: ", depts[count], TEXT_SIZE);
    basicSalary = readFloat("Enter Basic Salary (N$): ");
    housingAllowance = readFloat("Enter Housing Allowance (N$): ");
    transportAllowance = readFloat("Enter Transport Allowance (N$): ");

    if (basicSalary < 0.0f || housingAllowance < 0.0f || transportAllowance < 0.0f)
    {
        printf("Error: Salaries and allowances cannot be negative.\n");
        return;
    }

    ids[count] = id;
    basic[count] = basicSalary;
    housing[count] = housingAllowance;
    transport[count] = transportAllowance;
    count++;

    printf("Employee Added Successfully.\n");
}

void displayAllEmployees(void)
{
    int i;

    if (count == 0)
    {
        printf("No employees are currently registered.\n");
        return;
    }

    printf("\n--- Registered Employees ---\n");
    for (i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Dept: %s | Basic: N$%.2f | Housing: N$%.2f | Transport: N$%.2f | Gross: N$%.2f\n",
               ids[i], names[i], depts[i], basic[i], housing[i], transport[i], getEmployeeGross(i));
    }
}

static void searchEmployee(void)
{
    int searchId = readInt("Enter Employee ID to search: ");
    int index = findEmployeeById(searchId);

    if (index == -1)
    {
        printf("Employee not found.\n");
        return;
    }

    printf("Found Employee:\n");
    printf("ID: %d | Name: %s | Department: %s | Gross Salary: N$%.2f\n",
           ids[index], names[index], depts[index], getEmployeeGross(index));
}

void employeeMenu(void)
{
    int choice;

    do
    {
        printf("\n--- Employee Management ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Return to Main Menu\n");
        choice = readMenuChoice("Enter choice: ", 1, 4);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            displayAllEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            break;
        }
    } while (choice != 4);
}

int getEmployeeCount(void)
{
    return count;
}

float getEmployeeGross(int index)
{
    if (index < 0 || index >= count)
    {
        return 0.0f;
    }
    return basic[index] + housing[index] + transport[index];
}
