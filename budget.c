#include <stdio.h>
#include <string.h>
#include "budget.h"
#include "input.h"

#define MAX_BUDGET 50
#define TEXT_SIZE 50

static char deptNames[MAX_BUDGET][TEXT_SIZE];
static float allocated[MAX_BUDGET];
static float expenditure[MAX_BUDGET];
static int count = 0;

static void addBudget(void)
{
    float alloc;
    float exp;

    if (count >= MAX_BUDGET)
    {
        printf("Error: Budget register is full.\n");
        return;
    }

    readString("Enter Department: ", deptNames[count], TEXT_SIZE);
    alloc = readFloat("Enter Allocated Budget (N$): ");
    exp = readFloat("Enter Expenditure (N$): ");

    if (alloc < 0.0f || exp < 0.0f)
    {
        printf("Error: Budget values cannot be negative.\n");
        return;
    }

    allocated[count] = alloc;
    expenditure[count] = exp;
    count++;
    printf("Budget Recorded Successfully.\n");
}

void displayAllBudgets(void)
{
    int i;

    if (count == 0)
    {
        printf("No departmental budgets are currently registered.\n");
        return;
    }

    printf("\n--- Registered Department Budgets ---\n");
    for (i = 0; i < count; i++)
    {
        printf("Dept: %s | Allocated: N$%.2f | Expenditure: N$%.2f | Remaining: N$%.2f | Status: %s\n",
               deptNames[i], allocated[i], expenditure[i], getBudgetRemaining(i),
               getBudgetRemaining(i) >= 0.0f ? "WITHIN BUDGET" : "EXCEEDED BUDGET");
    }
}

void budgetMenu(void)
{
    int choice;

    do
    {
        printf("\n--- Budget Management ---\n");
        printf("1. Add Department Budget\n");
        printf("2. Display Budgets\n");
        printf("3. Return to Main Menu\n");
        choice = readMenuChoice("Enter choice: ", 1, 3);

        switch (choice)
        {
        case 1:
            addBudget();
            break;
        case 2:
            displayAllBudgets();
            break;
        case 3:
            break;
        }
    } while (choice != 3);
}

int getBudgetCount(void)
{
    return count;
}

float getBudgetAllocated(int index)
{
    if (index < 0 || index >= count)
    {
        return 0.0f;
    }
    return allocated[index];
}

float getBudgetExpenditure(int index)
{
    if (index < 0 || index >= count)
    {
        return 0.0f;
    }
    return expenditure[index];
}

float getBudgetRemaining(int index)
{
    return getBudgetAllocated(index) - getBudgetExpenditure(index);
}
