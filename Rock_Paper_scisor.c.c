#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char name[15];
    int rock = 0, paper = 1, scissor = 2, user_score = 0, pc_score = 0, n, n1 = rand() % 3;
    int i = 0, loop;
    printf("Welcome to Rock, Paper & Scissor Game\nEnter your name : ");
    gets(name);
    while (i < 2)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\t\t\t<<< its %s's turn >>>\n", name);
            printf("\tEnter\n\t0 for rock\n\t1 for paper\n\t2 for scissor\n=>");
            scanf("%d", &n);
            switch (n)
            {
            case 0:
                printf("you choosed Rock\n");
                break;
            case 1:
                printf("you choosed Paper\n");
                break;
            case 2:
                printf("you choosed Scissor\n");
                break;
            }
            printf("\t\t\t<<< its PC's turn >>>\n");
            switch (n1)
            {
            case 0:
                printf("PC choosed Rock\n");
                break;
            case 1:
                printf("PC choosed Paper\n");
                break;
            case 2:
                printf("PC choosed Scissor\n");
                break;
            }
            if ((n1 == paper && n == rock) || (n1 == rock && n == scissor) || (n1 == scissor && n == paper))
            {
                printf("\t-->>\tPC got this point\t<<--\n");
                pc_score++;
            }
            else if ((n == paper && n1 == rock) || (n == rock && n1 == scissor) || (n == scissor && n1 == paper))
            {
                printf("\t-->>\tYou got this point\t<<--\n");
                user_score++;
            }
            else
            {
                printf("\t->>\tBoth choosed same\t<<--\n");
            }
            printf("\t\tscore: pc %d, you %d\n", pc_score, user_score);
            // printf("\n\n");
        }
        printf("-------------------\n");
        if (user_score > pc_score)
        {
            printf("%s wins", name);
        }
        else if (user_score < pc_score)
        {
            printf("PC wins");
        }
        else
        {
            printf("Match Draw");
        }
        printf("\n-------------------\n\nEnter 1 to continue\nenter 0 to exit\n>");
        scanf("%d", &loop);
        // gets(name);
        if (loop == 0)
        {
            break;
        }
    }
    return 0;
}