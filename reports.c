#include <stdio.h>
#include <string.h>
#include "reports.h"
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"

void displayReports(void)
{
    char header[100] = "\n=== MFMS ";
    int i;

    strcat(header, "EXECUTIVE REPORTS ===");
    printf("%s\n", header);

    /* Employee Report */
    {
        int empCount = getEmployeeCount();
        float totalSalary = 0.0f;
        float highest = 0.0f;
        float lowest = 0.0f;

        for (i = 0; i < empCount; i++)
        {
            float salary = getEmployeeGross(i);
            totalSalary += salary;
            if (i == 0 || salary > highest)
            {
                highest = salary;
            }
            if (i == 0 || salary < lowest)
            {
                lowest = salary;
            }
        }

        printf("\n[ Employee Report ]\n");
        printf("Total Employees: %d\n", empCount);
        if (empCount > 0)
        {
            printf("Average Salary: N$%.2f\n", totalSalary / empCount);
            printf("Highest Salary: N$%.2f\n", highest);
            printf("Lowest Salary: N$%.2f\n", lowest);
        }
        else
        {
            printf("No employee salary data available.\n");
        }
    }

    /* Budget Report */
    {
        int budCount = getBudgetCount();
        float totalAllocated = 0.0f;
        float totalExpenditure = 0.0f;
        int exceeded = 0;

        for (i = 0; i < budCount; i++)
        {
            totalAllocated += getBudgetAllocated(i);
            totalExpenditure += getBudgetExpenditure(i);
            if (getBudgetRemaining(i) < 0.0f)
            {
                exceeded++;
            }
        }

        printf("\n[ Budget Report ]\n");
        printf("Total Allocated: N$%.2f\n", totalAllocated);
        printf("Total Expenditure: N$%.2f\n", totalExpenditure);
        printf("Remaining Budget: N$%.2f\n", totalAllocated - totalExpenditure);
        printf("Departments Exceeding Budget: %d\n", exceeded);

        if (budCount == 0)
        {
            printf("No departmental budget data available.\n");
        }
    }

    /* Supplier Report */
    printf("\n[ Supplier Report ]\n");
    printf("Total Registered Suppliers: %d\n", getSupplierCount());
    displayAllSuppliers();

    /* Asset Report */
    printf("\n[ Asset Report ]\n");
    printf("Total Registered Assets: %d\n", getAssetCount());
    displayAllAssets();
}
