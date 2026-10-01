#include <stdio.h>
#include <string.h>
#include "suppliers.h"
#include "input.h"

#define MAX_SUP 100
#define NAME_SIZE 50
#define EMAIL_SIZE 80
#define PHONE_SIZE 30

static int supIds[MAX_SUP];
static char supNames[MAX_SUP][NAME_SIZE];
static char emails[MAX_SUP][EMAIL_SIZE];
static char phones[MAX_SUP][PHONE_SIZE];
static char towns[MAX_SUP][NAME_SIZE];
static int count = 0;

static int findSupplierById(int id)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (supIds[i] == id)
        {
            return i;
        }
    }
    return -1;
}

static int findSupplierByName(const char *name)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (strcmp(supNames[i], name) == 0)
        {
            return i;
        }
    }
    return -1;
}

static int isValidEmail(const char *email)
{
    const char *at = strchr(email, '@');
    const char *dot;
    if (at == NULL || at == email)
    {
        return 0;
    }
    dot = strchr(at + 1, '.');
    return dot != NULL && dot > at + 1 && *(dot + 1) != '\0';
}

static void addSupplier(void)
{
    int id;

    if (count >= MAX_SUP)
    {
        printf("Error: Supplier register is full.\n");
        return;
    }

    id = readInt("Enter Supplier ID: ");
    if (id <= 0)
    {
        printf("Error: Supplier ID must be greater than zero.\n");
        return;
    }
    if (findSupplierById(id) != -1)
    {
        printf("Error: A supplier with that ID already exists.\n");
        return;
    }

    supIds[count] = id;
    readString("Enter Supplier Name: ", supNames[count], NAME_SIZE);
    readString("Enter Email: ", emails[count], EMAIL_SIZE);
    if (!isValidEmail(emails[count]))
    {
        printf("Error: Please enter a valid email address.\n");
        return;
    }
    readString("Enter Phone: ", phones[count], PHONE_SIZE);
    readString("Enter Town/Location: ", towns[count], NAME_SIZE);

    count++;
    printf("Supplier Added Successfully.\n");
}

void displayAllSuppliers(void)
{
    int i;

    if (count == 0)
    {
        printf("No suppliers are currently registered.\n");
        return;
    }

    printf("\n--- Registered Suppliers ---\n");
    for (i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Email: %s | Phone: %s | Town: %s\n",
               supIds[i], supNames[i], emails[i], phones[i], towns[i]);
    }
}

static void searchSupplier(void)
{
    char searchName[NAME_SIZE];
    int index;

    readString("Enter Supplier Name to search: ", searchName, NAME_SIZE);
    index = findSupplierByName(searchName);

    if (index == -1)
    {
        printf("Supplier not found.\n");
        return;
    }

    printf("Found Supplier: ID %d | Name: %s | Email: %s | Phone: %s | Town: %s\n",
           supIds[index], supNames[index], emails[index], phones[index], towns[index]);
}

void supplierMenu(void)
{
    int choice;

    do
    {
        printf("\n--- Supplier Management ---\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier by Name\n");
        printf("4. Return to Main Menu\n");
        choice = readMenuChoice("Enter choice: ", 1, 4);

        switch (choice)
        {
        case 1:
            addSupplier();
            break;
        case 2:
            displayAllSuppliers();
            break;
        case 3:
            searchSupplier();
            break;
        case 4:
            break;
        }
    } while (choice != 4);
}

int getSupplierCount(void)
{
    return count;
}
