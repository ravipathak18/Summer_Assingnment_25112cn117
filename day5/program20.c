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
    int n, largest = 0;
    printf("ENTER THE NUMBER :");
    scanf("%d", &n);
    printf("THE LARGEST OF THE PRIME FACTOR OF THE NUMBER IS:");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isprime(i))
        {
            largest = i;
        }
    }
    printf("%d", largest);
    return 0;
}