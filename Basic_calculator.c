#include <stdio.h>

int main()
{
    int a, b, d;
    char c;
    for (int j = 0; j < 2;)
    {
        printf("enter number ");
        scanf("%d", &a);
        int i = 0;
        do
        {
            printf("enter one of them\n+ -\n* /\n");
            scanf("%s", &c);
            if (c == '+' || c == '-' || c == '*' || c == '/')
            {
                break;
            }

        } while (i < 2);

        printf("enter number : ");
        scanf("%d", &b);
        switch (c)
        {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;

        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;

        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;

        case '/':
            printf("%d / %d = %d", a, b, a / b);
        }
        printf("\n\n\n---------------------\n");
        printf("enter 1 to continue\nenter 0 to exit\n>>");
        scanf("%d", &d);
        if (d == 0)
        {
            break;
        }
    }

    return 0;
}