#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result *= base;
    }

    return result;
}

int countDigits(int n)
{
    int count = 0;

    while(n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int isArmstrong(int n)
{
    int original = n;
    int digits = countDigits(n);
    int sum = 0;

    while(n != 0)
    {
        int digit = n % 10;
        sum += power(digit, digits);
        n /= 10;
    }

    return (sum == original);
}

int main()
{
    int n;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("ARMSTRONG NUMBER");
    else
        printf("NOT AN ARMSTRONG NUMBER");

    return 0;
}