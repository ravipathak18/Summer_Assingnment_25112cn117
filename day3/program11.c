#include <stdio.h>
int minimum(int a, int b)
{
    int min = a;
    if (a > b)
    {
        min = b;
    }
    return min;
}
int gcd(int a, int b)
{
    int hcf = 0;
    for (int i = 1; i <= minimum(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int i, a, b;
    printf("ENTER THE  FIRST NUMBER:");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("THE HCF OF %d  and %d is %d", a, b, hcf);
    return 0;
}