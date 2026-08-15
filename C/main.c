#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John Doe";
    int characterAge = 35;

    int age = 50;
    double gpa = 3.7;
    char grade = 'D';
    char str[] = "StrawberryMilk";

    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    printf("\n");

    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    characterAge = 40;
    printf("He really liked the name %s,\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    printf("\nTeam ChocolateMilk v\\s Team %s!", str);
    printf("\nMax. Age : %d", age);
    printf("\nCut-Off : %.2f", gpa);
    printf("\nMin. Grade : %c", grade);

    return 0;
}