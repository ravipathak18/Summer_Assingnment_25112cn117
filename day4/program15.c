#include <stdio.h>
int main()
{
    int n, temp = 0, sum = 0;
    printf("ENTER THE NUMBER:");
    scanf("%d", &n);
    int orignol = n;
    while (n > 0)
    {
        temp = n % 10;
        sum = sum + temp * temp * temp;
        n = n / 10;
    }
    if (orignol == sum)
    {
        printf("THE NO. %d IS ARMSTRONG NO.", orignol);
    }
    else
        printf("THE NUMBER %d Is NOT AN ARMSTRONG NO.", orignol);
    return 0;
}