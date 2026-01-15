#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check input string validity for the given base
int isValid(char input[], int base) 
{
    for (int i = 0; i < (int)strlen(input); i++) 
    {
        int digit;
        char ch = toupper((unsigned char)input[i]);

        if (ch >= '0' && ch <= '9') digit = ch - '0';
        else if (ch >= 'A' && ch <= 'F') digit = ch - 'A' + 10;
        else return 0;

        if (digit >= base) return 0;
    }
    return 1;
}

// Function to convert any base to Decimal
unsigned long long toDecimal(char* input, int base)
{
    unsigned long long decimal = 0;
    unsigned long long power = 1;

    int len = strlen(input);
    for (int i = len - 1; i >= 0; i--)
    {
        int val = isdigit((unsigned char)input[i]) ? (input[i] - '0') : (toupper((unsigned char)input[i]) - 'A' + 10);
        decimal += val * power;
        power *= base;
    }
    return decimal;
}

// Function to convert Decimal to target base
void fromDecimal(unsigned long long decimal, int base)
{
    if (decimal == 0) { printf("Result: 0\n"); return;}

    char result[64];
    int i = 0;
    char mapped[] = "0123456789ABCDEF";

    while (decimal > 0)
    {
        result[i++] = mapped[decimal % base];
        decimal /= base;
    }
    printf("\n\n---- RESULT ----\n");
    for (int j = i - 1; j >= 0; j--) printf("%c", result[j]);
    printf("\n----------------\n");
}

int main()
{
    int choice;
    char input[64];
    int srcBase, destBase;

    while (1)
    {
        printf("\n---- NUMBER SYSTEM ----");
        printf("\n1 - Start Conversion___?");
        printf("\n0 - EXIT (Abort)___!!!");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\nExiting program.....Sayonara!\n");
            break;
        }
        
        else if (choice == 1)
        {
            printf("\nEnter Source Base (2, 8, 10, 16): ");
            scanf("%d", &srcBase);

            printf("Enter Target Base (2, 8, 10, 16): ");
            scanf("%d", &destBase);

            printf("Enter the Number: ");
            scanf("%63s", input);

            if (!isValid(input, srcBase))
            {
                printf("\n___ERROR: Invalid number for base %d!___\n", srcBase);
                continue;
            }

            unsigned long long decimal = toDecimal(input, srcBase);
            fromDecimal(decimal, destBase);
        }

        else
        {
            printf("\n___INVALID! Please try again!___\n");
        }
    }
    return 0;
}