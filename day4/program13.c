#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, num3, n;
    printf("ENTER THE NUMBER OF TERM IN SERIES :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}