#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
     if (n == 1 || n == 0) return 1;
    else
    {
        for (int i = 2; i <= n; i++)
            fact = fact * i;
        return fact;
    }
}
int main()
{
    int n,temp, sum = 0;
    printf("ENTER THE NUMBER:");
    scanf("%d", &n);
    int num = n;
   while(n>0)
    {
        temp = n % 10;
        sum += factorial(temp);
       n=n/10;
    }
    if (num == sum)
    {
        printf("THE  NUMBER IS STRONG NUMBER ");
    }
    else
    {
        printf("THE NUMBER IS NOT A STRONG NUMBER");
    }
    return 0;
}