#include <stdio.h>
int isperfectnum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
       if(n%i==0){
        sum+=i;
       }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("ENTER THE VALUE OF N:");
    scanf("%d", &n);
    if (isperfectnum(n))
    {
        printf("%d is perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number ", n);
    }
    return 0;
}