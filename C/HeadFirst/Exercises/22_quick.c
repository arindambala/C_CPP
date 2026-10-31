#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores_desc(const void* score_a, const void* score_b);
int compare_names(const void* a, const void* b);

int main()
{
    return 0;
}

int compare_scores_desc(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;

    return b - a;
}

int compare_names(const void* a, const void* b)
{
    char** sa = (char**)a;
    char** sb = (char**)b;

    return strcmp(*sa, *sb);
}