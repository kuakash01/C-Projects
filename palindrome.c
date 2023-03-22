#include <stdio.h>
int palindrome(int n)
{
    int reversed = 0;
    int original = n;
    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    printf("reversed no is %d\n", reversed);
    if (reversed == original)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter number to check if palindrome : ");
    scanf("%d", &number);
    if (palindrome(number))
    {
        printf("%This is palindrome");
    }
    else
    {
        printf("%This is not palindrome");
    }
    return 0;
}
