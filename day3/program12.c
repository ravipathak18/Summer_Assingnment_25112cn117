#include <stdio.h>
int minimum(int x, int y)
{
    int min = x;
    if (x > y)
    {
        min = y;
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
int LCM(int a, int b)
{
    int lcm = (a * b) / gcd(a, b);
    return lcm;
}

int main()
{
    int a, b;
    printf("ENTER THE FIRST NUMBER :");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER :");
    scanf("%d", &b);
    printf("THE LCM OF %d AND %d IS %d", a, b, LCM(a, b));

    return 0;
}