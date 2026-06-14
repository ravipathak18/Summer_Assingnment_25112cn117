#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d", &n);
    printf("THE FACTORIAL OF THE NUMBER IS %d",factorial(n));
    return 0;
}