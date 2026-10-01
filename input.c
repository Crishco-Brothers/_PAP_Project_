#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#include "input.h"

static void trimNewline(char *text)
{
    text[strcspn(text, "\n")] = '\0';
}

static void discardRemainingInput(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        /* Discard invalid/extra characters. */
    }
}

int readInt(const char *prompt)
{
    char buffer[100];
    char *end;
    long value;

    for (;;)
    {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            printf("\nInput ended. Please restart the program.\n");
            exit(EXIT_FAILURE);
        }

        trimNewline(buffer);
        errno = 0;
        end = NULL;
        value = strtol(buffer, &end, 10);

        while (end != NULL && *end == ' ')
        {
            end++;
        }

        if (buffer[0] != '\0' && end != buffer && *end == '\0' && errno == 0)
        {
            if (value < -2147483647L - 1L || value > 2147483647L)
            {
                printf("Error: Number is out of range.\n");
                continue;
            }
            return (int)value;
        }

        printf("Error: Please enter a valid whole number.\n");
    }
}

float readFloat(const char *prompt)
{
    char buffer[100];
    char *end;
    float value;

    for (;;)
    {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            printf("\nInput ended. Please restart the program.\n");
            exit(EXIT_FAILURE);
        }

        trimNewline(buffer);
        end = NULL;
        value = strtof(buffer, &end);

        while (end != NULL && *end == ' ')
        {
            end++;
        }

        if (buffer[0] != '\0' && end != buffer && *end == '\0' && isfinite(value))
        {
            return value;
        }

        if (buffer[0] != '\0' && end != buffer && *end == '\0' && !isfinite(value))
        {
            printf("Error: Please enter a finite number.\n");
            continue;
        }

        printf("Error: Please enter a valid number.\n");
    }
}

void readString(const char *prompt, char *buffer, int size)
{
    for (;;)
    {
        printf("%s", prompt);
        if (fgets(buffer, (size_t)size, stdin) == NULL)
        {
            printf("\nInput ended. Please restart the program.\n");
            exit(EXIT_FAILURE);
        }

        if (strchr(buffer, '\n') == NULL)
        {
            discardRemainingInput();
        }

        trimNewline(buffer);

        if (buffer[0] != '\0')
        {
            return;
        }

        printf("Error: This field cannot be empty.\n");
    }
}

int readMenuChoice(const char *prompt, int min, int max)
{
    int choice;
    for (;;)
    {
        choice = readInt(prompt);
        if (choice >= min && choice <= max)
        {
            return choice;
        }
        printf("Invalid choice. Please enter a number from %d to %d.\n", min, max);
    }
}
