                                    // this code will print my name//
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i2 = 0, i3 = 4, i4 = -5, i = 10; i2<10, i3> 0, i4<5, i> 0; i2++, i3--, i4++, i--)
    {
        // A starts from here
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 1; k++)
        {
            printf("**");
        }

        for (int j = 0; j < i2; j++)
        {
            if (i2 == 5 || i2 == 6)
            {
                printf("**");
            }
            else
            {
                printf("  ");
            }
        }
        for (int k = 0; k < 1; k++)
        {
            printf("**");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf(" ");

        // K starts from here
        for (int l = 0; l < 1; l++)
        {
            printf("**");
        }
        if (i2 < 6)
        {
            for (int k = 0; k <= i3; k++)
            {
                printf(" ");
            }
        }
        if (i2 > 5)
        {
            for (int k = 0; k < i4; k++)
            {
                printf(" ");
            }
        }
        for (int n = 0; n < 2; n++)
        {
            printf("*");
        }
        if (i2 < 6)
        {
            for (int j = 0; j < i2; j++)
            {
                printf(" ");
            }
        }
        if (i2 > 5)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
        }

        // A starts from here
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 1; k++)
        {
            printf("**");
        }

        for (int j = 0; j < i2; j++)
        {
            if (i2 == 5 || i2 == 6)
            {
                printf("**");
            }
            else
            {
                printf("  ");
            }
        }
        for (int k = 0; k < 1; k++)
        {
            printf("**");
        }
        // for space between alphabets//
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // s starts fro here//
        if (i2 < 2)
        {
            for (int s = 0; s < 13; s++)
            {
                printf("*");
            }
        }
        if (i2 > 1 && i2 < 8)
        {
            for (int s = 0; s < i2 - 1; s++)
            {
                printf(" ");
            }
        }

        if (i2 > 1 && i2 < 8)
        {
            for (int s = 0; s < i2 - 1; s++)
            {
                printf(" ");
            }
        }

        if (i2 > 7)
        {
            for (int s = 0; s < 13; s++)
            {
                printf("*");
            }
        }

        for (int s = 0; s < 1; s++)
        {
            printf("**");
        }

        if (i2 > 1 && i2 < 8)
        {
            for (int s = 0; s < i - 2; s++)
            {
                printf(" ");
            }
        }

        if (i2 > 1 && i2 < 8)
        {
            for (int s = 0; s < i - 3; s++)
            {
                printf(" ");
            }
        }
        // for space between alphabets//
        printf("  ");

        // H starts from here//
        printf("**");

        for (int h = 0; h < 10; h++)
        {
            if (i2 == 5 || i2 == 6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("**");

        printf("\n");
    }
    getch();
    return 0;
}