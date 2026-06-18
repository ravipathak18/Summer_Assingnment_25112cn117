#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
        return 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    printf("THE FACTORIAL OF THE NUMBER IS %d",factorial(n));
    return 0;
}