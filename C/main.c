#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char phrase[20];
    char phraseTwo[20];

    int angelNumbers[] = {111, 222, 333, 444, 555, 666, 777, 888, 999};

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
    printf("Thy estimated percentage do be %f!\n", pct);

    printf("\nWhat's thy favourite phrase? :\t");
    scanf("%s", phrase);

    while (getchar() != '\n' && !feof(stdin));

    printf("Bars - %s!\n", phrase);

    printf("\nWhat's thy favourite second phrase? :\t");
    fgets(phraseTwo, 20, stdin);

    phraseTwo[strcspn(phraseTwo, "\n")] = '\0';
    printf("Bars - %s!\n", phraseTwo);

    printf("\n%d\n%d\n%d", angelNumbers[0], angelNumbers[1], angelNumbers[8]);

    return 0;
}