#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "reports.h"
#include "input.h"

static void displayMainMenu(void)
{
    printf("\n========================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("1. Employee Management\n");
    printf("2. Budget Management\n");
    printf("3. Supplier Management\n");
    printf("4. Asset Management\n");
    printf("5. Reports\n");
    printf("6. Exit\n");
}

int main(void)
{
    int choice;

    do
    {
        displayMainMenu();
        choice = readMenuChoice("Enter your choice: ", 1, 6);

        switch (choice)
        {
        case 1:
            employeeMenu();
            break;
        case 2:
            budgetMenu();
            break;
        case 3:
            supplierMenu();
            break;
        case 4:
            assetMenu();
            break;
        case 5:
            displayReports();
            break;
        case 6:
            printf("Exiting Municipal Financial Management System.\n");
            break;
        }
    } while (choice != 6);

    return 0;
}
