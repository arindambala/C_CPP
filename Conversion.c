#include <stdio.h>
#include <string.h>
#include <inttypes.h>

/* ----------- DECIMAL CONVERSIONS ---------- */

void DecimaltoBinary(uint64_t given)
{
    int taken[64], count = 0;

    if (given == 0)
    {
        printf("\nBinary Of Inputted Decimal: 0");
        return;
    }

    while (given > 0)
    {
        taken[count++] = given % 2;
        given /= 2;
    }

    printf("\nBinary Of Inputted Decimal: ");
    for (int i = count - 1; i >= 0; i--) printf("%d", taken[i]);
}

void DecimaltoOctal(uint64_t given)
{
    int taken[64], count = 0;

    if (given == 0)
    {
        printf("\nOctal Of Inputted Decimal: 0");
        return;
    }

    while (given > 0)
    {
        taken[count++] = given % 8;
        given /= 8;
    }

    printf("\nOctal Of Inputted Decimal: ");
    for (int i = count - 1; i >= 0; i--) printf("%d", taken[i]);
}

void DecimaltoHexadecimal(uint64_t given)
{
    char taken[64];
    int count = 0;

    if (given == 0)
    {
        printf("\nHexadecimal Of Inputted Decimal: 0");
        return;
    }

    while (given > 0)
    {
        int rem = given % 16;

        if (rem < 10) taken[count++] = rem + '0';
        else taken[count++] = rem - 10 + 'A';

        given /= 16;
    }

    printf("\nHexadecimal Of Inputted Decimal: ");
    for (int i = count - 1; i >= 0; i--) printf("%c", taken[i]);
}

/* ----------- BINARY CONVERSIONS ---------- */

void BinarytoDecimal(uint64_t given)
{
    int dec = 0, count = 0;

    while (given > 0)
    {
        int bit = given % 10;

        if (bit != 0 && bit != 1)
        {
            printf("\n!---- INVALID BASE_2 ----!\n");
            return;
        }

        dec += bit << count;
        count++;
        given /= 10;
    }

    printf("\nDecimal Of Inputted Binary: %d", dec);
}

void BinarytoOctal(uint64_t given)
{
    int dec = 0, count = 0;

    while (given > 0)
    {
        int bit = given % 10;

        if (bit != 0 && bit != 1)
        {
            printf("\n!---- INVALID BASE_2 ----!\n");
            return;
        }

        dec += bit << count;
        count++;
        given /= 10;
    }

    int oct = 0, place = 1;

    while (dec > 0)
    {
        oct += (dec % 8) * place;
        dec /= 8;
        place *= 10;
    }

    printf("\nOctal Of Inputted Binary: %d", oct);
}

void BinarytoHexadecimal(uint64_t given)
{
    char taken[64];
    int count = 0;

    while (given > 0)
    {
        int group = given % 10000;
        int value = 0, bitPos = 0;

        while (group > 0)
        {
            value += (group % 10) << bitPos;
            bitPos++;
            group /= 10;
        }

        if (value < 10) taken[count++] = value + '0';
        else taken[count++] = value - 10 + 'A';

        given /= 10000;
    }

    printf("\nHexadecimal Of Inputted Binary: ");
    for (int i = count - 1; i >= 0; i--) printf("%c", taken[i]);
}

/* ----------- OCTAL CONVERSIONS ---------- */

void OctaltoDecimal(uint64_t given)
{
    int dec = 0, power = 1;

    while (given > 0)
    {
        int digit = given % 10;

        if (digit > 7)
        {
            printf("\n!---- INVALID BASE_8 ----!\n");
            return;
        }

        dec += digit * power;
        power *= 8;
        given /= 10;
    }

    printf("\nDecimal Of Inputted Octal: %d", dec);
}

void OctaltoBinary(uint64_t given)
{
    int OctBin[] = {0, 1, 10, 11, 100, 101, 110, 111};
    uint64_t bin = 0, place = 1;

    while (given > 0)
    {
        int digit = given % 10;

        if (digit > 7)
        {
            printf("\n!----- INVALID BASE_8 -----!\n");
            return;
        }

        bin += OctBin[digit] * place;
        place *= 1000;
        given /= 10;
    }

    printf("\nBinary Of Inputted Octal: %" PRIu64, bin);
}

void OctaltoHexadecimal(uint64_t given)
{
    int OctBin[] = {0, 1, 10, 11, 100, 101, 110, 111};
    uint64_t bin = 0, place = 1;
    char taken[64];
    int count = 0;

    while (given > 0)
    {
        int digit = given % 10;
        bin += OctBin[digit] * place;
        place *= 1000;
        given /= 10;
    }

    while (bin > 0)
    {
        int value = 0, bit = 0;
        int group = bin % 10000;

        while (group > 0)
        {
            value += (group % 10) << bit;
            bit++;
            group /= 10;
        }

        taken[count++] = (value < 10) ? value + '0' : value - 10 + 'A';
        bin /= 10000;
    }

    printf("\nHexadecimal Of Inputted Octal: ");
    for (int i = count - 1; i >= 0; i--) printf("%c", taken[i]);
}

/* ----------- HEXADECIMAL CONVERSIONS ---------- */

void HexadecimaltoDecimal()
{
    char given[64];
    uint64_t dec = 0;

    printf("\nEnter the Hexadecimal: ");
    scanf("%63s", given);

    for (int i = 0; given[i] != '\0'; i++)
    {
        int value;

        if (given[i] >= '0' && given[i] <= '9') value = given[i] - '0';
        else if (given[i] >= 'A' && given[i] <= 'F') value = given[i] - 'A' + 10;
        else if (given[i] >= 'a' && given[i] <= 'f') value = given[i] - 'a' + 10;
        else
        {
            printf("\n!----- INVALID BASE_16 -----!\n");
            return;
        }

        dec = (dec << 4) + value;
    }

    printf("\nDecimal Of Inputted Hexadecimal: %" PRIu64, dec);
}

void HexadecimaltoBinary()
{
    char given[32], bin[128] = "";

    printf("\nEnter the Hexadecimal: ");
    scanf("%31s", given);

    for (int i = 0; given[i] != '\0'; i++)
    {
        switch (given[i])
        {
            case '0': strcat(bin, "0000"); break;
            case '1': strcat(bin, "0001"); break;
            case '2': strcat(bin, "0010"); break;
            case '3': strcat(bin, "0011"); break;
            case '4': strcat(bin, "0100"); break;
            case '5': strcat(bin, "0101"); break;
            case '6': strcat(bin, "0110"); break;
            case '7': strcat(bin, "0111"); break;
            case '8': strcat(bin, "1000"); break;
            case '9': strcat(bin, "1001"); break;
            case 'A': case 'a': strcat(bin, "1010"); break;
            case 'B': case 'b': strcat(bin, "1011"); break;
            case 'C': case 'c': strcat(bin, "1100"); break;
            case 'D': case 'd': strcat(bin, "1101"); break;
            case 'E': case 'e': strcat(bin, "1110"); break;
            case 'F': case 'f': strcat(bin, "1111"); break;
            default:
                printf("\n!----- INVALID BASE_16 -----!\n");
                return;
        }
    }

    printf("\nBinary Of Inputted Hexadecimal: %s", bin);
}

void HexadecimaltoOctal()
{
    char given[64];
    uint64_t dec = 0, oct = 0, place = 1;

    printf("\nEnter the Hexadecimal: ");
    scanf("%63s", given);

    for (int i = 0; given[i] != '\0'; i++)
    {
        int value;

        if (given[i] >= '0' && given[i] <= '9') value = given[i] - '0';
        else if (given[i] >= 'A' && given[i] <= 'F') value = given[i] - 'A' + 10;
        else if (given[i] >= 'a' && given[i] <= 'f') value = given[i] - 'a' + 10;
        else
        {
            printf("\n!----- INVALID BASE_16 -----!\n");
            return;
        }

        dec = (dec << 4) + value;
    }

    while (dec > 0)
    {
        oct += (dec % 8) * place;
        place *= 10;
        dec /= 8;
    }

    printf("\nOctal Of Inputted Hexadecimal: %" PRIu64, oct);
}

int main()
{
    int flag = 1;

    while (flag)
    {
        uint64_t given;
        int choice;

        printf("\n");

        printf("\n-----_----- NUMBER SYSTEM -----_-----");
        printf("\n1 - Decimal to Binary___?");
        printf("\n2 - Decimal to Octal___?");
        printf("\n3 - Decimal to Hexadecimal___?");
        printf("\n4 - Binary to Decimal___?");
        printf("\n5 - Binary to Octal___?");
        printf("\n6 - Binary to Hexadecimal___?");
        printf("\n7 - Octal to Decimal___?");
        printf("\n8 - Octal to Binary___?");
        printf("\n9 - Octal to Hexadecimal___?");
        printf("\n10 - Hexadecimal to Decimal___?");
        printf("\n11 - Hexadecimal to Binary___?");
        printf("\n12 - Hexadecimal to Octal___?");
        printf("\n0 - EXIT (Abort)___!!!");

        printf("\n\nEnter Choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("\n___INVALID! Please try again!___\n");
            break;
        }

        switch (choice)
        {
            case 1:
                printf("\nEnter the Decimal: ");
                scanf("%" SCNu64, &given);
                DecimaltoBinary(given);
                break;
            
            case 2:
                printf("\nEnter the Decimal: ");
                scanf("%" SCNu64, &given);
                DecimaltoOctal(given);
                break;
            
            case 3:
                printf("\nEnter the Decimal: ");
                scanf("%" SCNu64, &given);
                DecimaltoHexadecimal(given);
                break;
            
            case 4:
                printf("\nEnter the Binary: ");
                scanf("%" SCNu64, &given);
                BinarytoDecimal(given);
                break;

            case 5:
                printf("\nEnter the Binary: ");
                scanf("%" SCNu64, &given);
                BinarytoOctal(given);
                break;

            case 6:
                printf("\nEnter the Binary: ");
                scanf("%" SCNu64, &given);
                BinarytoHexadecimal(given);
                break;
            
            case 7:
                printf("\nEnter the Octal: ");
                scanf("%" SCNu64, &given);
                OctaltoDecimal(given);
                break;

            case 8:
                printf("\nEnter the Octal: ");
                scanf("%" SCNu64, &given);
                OctaltoBinary(given);
                break;
            
            case 9:
                printf("\nEnter the Octal: ");
                scanf("%" SCNu64, &given);
                OctaltoHexadecimal(given);
                break;
            
            case 10:
                HexadecimaltoDecimal();
                break;
            
            case 11:
                HexadecimaltoBinary();
                break;
            
            case 12:
                HexadecimaltoOctal();
                break;
            
            case 0:
                printf("\nExiting program.....Sayonara!\n");
                flag = 0;
                break;
            
            default:
                printf("\n___!___ ABORT ___!___\n");
        }
    }

    return 0;
}