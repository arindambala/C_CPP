#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int fab_num = 5;

    char characterName[] = "John Doe";
    int characterAge = 35;

    int age = 50;
    double gpa = 3.7;
    char grade = 'D';
    char str[] = "StrawberryMilk";

    int in_num;
    double pct;

    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    printf("\n");

    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    // characterAge = 40;
    printf("He really liked the name %s,\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    /*
        TODO: Comments
    */

    printf("\nTeam ChocolateMilk v\\s Team %s!", str);
    printf("\nMax. Age : %d", age);
    printf("\nCut-Off : %.2f", gpa);
    printf("\nMin. Grade : %c\n", grade);

    printf("\nFavourite number do be %d!\n", fab_num);

    printf("\nWhat's thy favourite number? :\t");
    scanf("%d", &in_num);
    printf("Thy favourite number do be %d!\n", in_num);

    printf("\nWhat's thy estimated percentage of victory? :\t");
    scanf("%lf", &pct);
    printf("Thy estimated percentage do be %.f!\n", pct);

    return 0;
}