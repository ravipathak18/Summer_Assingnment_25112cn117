#include <stdio.h>
int isprime(int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d", &n);
    printf("THE PRIME FACTOR OF THE NUMBER ARE:");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0&&isprime(i)){

                printf("%d ", i);
        }
    }
    return 0;
}