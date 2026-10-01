#include <stdio.h>
#include <string.h>
#include "assets.h"
#include "input.h"

#define MAX_ASSETS 100
#define TEXT_SIZE 50

static int assetIds[MAX_ASSETS];
static char assetNames[MAX_ASSETS][TEXT_SIZE];
static char assetTypes[MAX_ASSETS][TEXT_SIZE];
static float values[MAX_ASSETS];
static char departments[MAX_ASSETS][TEXT_SIZE];
static char conditions[MAX_ASSETS][TEXT_SIZE];
static int count = 0;

static int findAssetById(int id)
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (assetIds[i] == id)
        {
            return i;
        }
    }
    return -1;
}

static void addAsset(void)
{
    int id;
    float value;
    char tempName[TEXT_SIZE];
    char tempType[TEXT_SIZE];
    char tempDept[TEXT_SIZE];
    char tempCond[TEXT_SIZE];

    if (count >= MAX_ASSETS)
    {
        printf("Error: Asset register is full.\n");
        return;
    }

    id = readInt("Enter Asset ID: ");
    if (id <= 0)
    {
        printf("Error: Asset ID must be greater than zero.\n");
        return;
    }
    if (findAssetById(id) != -1)
    {
        printf("Error: An asset with that ID already exists.\n");
        return;
    }

    readString("Enter Asset Name: ", tempName, TEXT_SIZE);
    readString("Enter Asset Type: ", tempType, TEXT_SIZE);
    
    value = readFloat("Enter Purchase Value (N$): ");
    if (value < 0.0f)
    {
        printf("Error: Purchase value cannot be negative.\n");
        return;
    }

    readString("Enter Department: ", tempDept, TEXT_SIZE);
    readString("Enter Condition: ", tempCond, TEXT_SIZE);

    // Commit to arrays only after all validations pass successfully
    assetIds[count] = id;
    strcpy(assetNames[count], tempName);
    strcpy(assetTypes[count], tempType);
    values[count] = value;
    strcpy(departments[count], tempDept);
    strcpy(conditions[count], tempCond);

    count++;
    printf("Asset Added Successfully.\n");
}

void displayAllAssets(void)
{
    int i;

    if (count == 0)
    {
        printf("No assets are currently registered.\n");
        return;
    }

    printf("\n--- Registered Municipal Assets ---\n");
    for (i = 0; i < count; i++)
    {
        printf("Asset ID: %d\n", assetIds[i]);
        printf("Name: %s\n", assetNames[i]);
        printf("Type: %s\n", assetTypes[i]);
        printf("Purchase Value: N$%.2f\n", values[i]);
        printf("Department: %s\n", departments[i]);
        printf("Condition: %s\n", conditions[i]);
        printf("----------------------------------------\n");
    }
}

static void searchAsset(void)
{
    int id = readInt("Enter Asset ID to search: ");
    int index = findAssetById(id);

    if (index == -1)
    {
        printf("Asset not found.\n");
        return;
    }

    printf("Found Asset:\n");
    printf("ID: %d | Name: %s | Type: %s | Value: N$%.2f | Department: %s | Condition: %s\n",
           assetIds[index], assetNames[index], assetTypes[index], values[index],
           departments[index], conditions[index]);
}

void assetMenu(void)
{
    int choice;

    do
    {
        printf("\n--- Asset Management ---\n");
        printf("1. Add Asset\n");
        printf("2. Display Assets\n");
        printf("3. Search Asset by ID\n");
        printf("4. Return to Main Menu\n");
        choice = readMenuChoice("Enter choice: ", 1, 4);

        switch (choice)
        {
            case 1:
                addAsset();
                break;
            case 2:
                displayAllAssets();
                break;
            case 3:
                searchAsset();
                break;
            case 4:
                break;
        }
    } while (choice != 4);
}

int getAssetCount(void)
{
    return count;
}