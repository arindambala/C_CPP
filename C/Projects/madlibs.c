/* Mad Libs Game */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50

void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main()
{
    char adjectiveOne[MAX_STR_LEN];
    char noun[MAX_STR_LEN];
    char verb[MAX_STR_LEN];
    char place[MAX_STR_LEN];
    char animal[MAX_STR_LEN];
    char adjectiveTwo[MAX_STR_LEN];
    char exclamation[MAX_STR_LEN];
    char food[MAX_STR_LEN];

    printf("=========================================\n");
    printf("         WELCOME TO MAD LIBS!          \n");
    printf("=========================================\n");
    printf("Please provide the following words to create a story -> \n\n");

    // Inputs from the user
    printf("1. Enter an adjective : ");
    scanf("%49s", adjectiveOne);
    clear_input_buffer();

    printf("2. Enter a noun : ");
    scanf("%49s", noun);
    clear_input_buffer();

    printf("3. Enter a verb ('-ing') : ");
    scanf("%49s", verb);
    clear_input_buffer();

    printf("4. Enter a place : ");
    scanf("%49s", place);
    clear_input_buffer();

    printf("5. Enter an animal : ");
    scanf("%49s", animal);
    clear_input_buffer();

    printf("6. Enter another adjective : ");
    scanf("%49s", adjectiveTwo);
    clear_input_buffer();

    printf("7. Enter an exclamation (e.g., 'Alas!', 'Bruh!') : ");
    scanf("%49s", exclamation);
    clear_input_buffer();

    printf("8. Enter a food item : ");
    scanf("%49s", food);
    clear_input_buffer();

    // Generated story
    printf("\n\n=========================================\n");
    printf("           THE MAD LIBS STORY!           \n");
    printf("=========================================\n\n");

    printf("The morning felt like one of those days. It was kind of a %s morning. Nevertheless, I already had decided to go to %s. \n", adjectiveOne, place);
    printf("I was waiting for the bus to arrive. While doing so, my eyes caught a glance of a cute spotted %s %s \n", animal, verb);
    printf("near the man who was selling raw seafood, right next to a pile of %s. \n\n", noun);

    printf("'%s!' I thought to myself,-'That is one of the most %s looking %s's, if I've ever seen any!'\n", exclamation, adjectiveTwo, animal);

    printf("I quickly took out my phone and started filming it,\nnot for long though, since I couldn't afford missing the bus. \n");
    printf("I still have the video in my Snaps. I sometimes do get reminded of it, \n");
    printf("whenever I have to eat %s at home.\n\n", food);

    printf("=========================================\n");
    printf("           THANK YOU FOR PLAYING!           \n");
    printf("=========================================\n");

    return 0;
}