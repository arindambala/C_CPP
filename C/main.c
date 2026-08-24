#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void func(char User[], int age);
double cube(double num);

int MAX_NUM(int numOne, int numTwo)
{
    int result;

    if(numOne > numTwo) 
    {
        result = numOne;
    } 
    
    else 
    {
        result = numTwo;
    }

    return result;
}

int MAX_NUMS(int numOne, int numTwo, int numThree);
bool checkCondition(int num);

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

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

    bool checked;

    int marks, category;

    int indexOne = 1; 
    int indexTwo = 1;

    int arr[3][2] = {{1, 2}, {3, 5}, {7, 11}};

    int mem_age = 67;
    double mem_gpa = 6.9;
    char mem_grade = 'F';

    int * ptr_age = &mem_age;
    double *ptr_gpa = &mem_gpa;
    char * ptr_grade = &mem_grade;

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

    printf("\n\n%d", angelNumbers[5]);
    angelNumbers[5] = 314;
    printf("\n%d\n\n", angelNumbers[5]);

    func("StrawberryMilk", 1337);
    func("ChocolateMilk", 8008);

    printf("\nCubed : %f\n", cube(5.0));

    printf("\nMaximum - %d", MAX_NUM(2, 5));
    printf("\nMaximum - %d\n", MAX_NUM(11, 9));

    printf("\nMaximum - %d\n", MAX_NUMS(1, 3, 7));

    checked = checkCondition(5);
    printf("\n%d\n", checked);

    printf("\nEnter test marks (0 - 100) : ");
    if(scanf("%d", &marks) != 1)
    {
        printf("\nERROR! Invalid input! Please retry.\n");
        return 0;
    }

    if (marks < 0 || marks > 100)
    {
        printf("\nInvalid score! Please retry with a within range value.\n");
        return 0;
    }

    category = marks / 10;

    switch (category)
    {
        case 10:
            printf("\nLetter Grade : O\n");
            break;
        case 9:
            printf("\nLetter Grade : A\n");
            break;
        case 8:
            printf("\nLetter Grade : B\n");
            break;
        case 7:
            printf("\nLetter Grade : C\n");
            break;
        case 6:
            printf("\nLetter Grade : D\n");
            break;
        case 5:
        case 4:
            printf("\nLetter Grade : E\n");
            break;
        default:
            printf("\nLetter Grade : F\n");
    }

    struct Student studOne;
    studOne.age = 25;
    studOne.gpa = 3.7;
    strcpy(studOne.name, "Jane");
    strcpy(studOne.major, "Literature");

    printf("\nStudent Stats (Name - Age - Major - Gpa) : %s - %d - %s - %.2f\n", studOne.name, studOne.age, studOne.major, studOne.gpa);

    while (indexOne <= 5)
    {
        printf("\n%d", indexOne);
        indexOne++; // index = index + 1;
    }printf("\n");

    do
    {
        printf("\n%d", indexTwo % 2);
        indexTwo++;
    } while (indexTwo <= 5);

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", i);
    }

    printf("\n\n%d\n%d\n", arr[0][0], arr[1][1]);

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", arr[i][j]);
            if (j < 1) { printf(","); }
        }
        printf("\n");
    }

    printf("\nAge - Memory Address : %p\nGpa - Memory Address : %p\nGrade - Memory Address : %p\n", &mem_age, &mem_gpa, &mem_grade);

    return 0;
}

void func(char User[], int age)
{
    printf("HelloWorld! - from : %s (%d years old)\n", User, age);
}

double cube(double num)
{
    double result = pow(num, 3);
    return result;
    // printf("Returns?");
}

int MAX_NUMS(int numOne, int numTwo, int numThree)
{
    int result;

    if (numOne >= numTwo && numOne >= numThree)
    {
        result = numOne;
    }

    else if (numTwo >= numOne && numTwo >= numThree)
    {
        result = numTwo;
    }

    else
    {
        result = numThree;
    }

    return result;
}

bool checkCondition(int num)
{
    if (!(num > 0) || (num % 2 != 0))
    {
        return true;
    }

    else
    {
        return false;
    }
}