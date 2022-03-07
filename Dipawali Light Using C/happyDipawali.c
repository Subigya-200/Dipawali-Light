//Dipawali Light using C

#include <stdio.h>
int main()
{
    //For Aago(Fire)
    int i, j, n, space;
    n = 3;
    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= ((3 * n) + 1 - i); space++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= (7 + i - 1); space++)
        {
            printf(" ");
        }
        for (j = 5; j >= (2 * i) - 1; j--)
        {
            printf("*");

        }
        printf("\n");
    }

    //For Diyo

    n = 4;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= (i - 1); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (20 - (2 * i) + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("***#### Happy Dipawali ####***");
    printf("\n\n");

    return 0;
}
