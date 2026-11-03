#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
    char s[] = "Speak friend & enter!";
    encrypt(s);

    printf("\nEncrypted - '%s'\n", s);
    printf("Checksum - %i\n", checksum(s));

    encrypt(s);

    printf("\nDecrypted - '%s'\n", s);
    printf("Checksum - %i\n", checksum(s));

    return 0;
}