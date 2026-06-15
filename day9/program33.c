#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS OR COLUMNS :");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)

    {
        for (int j = a; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}