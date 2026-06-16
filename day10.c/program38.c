#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS OR COLUMN :");
    scanf("%d", &n);
    int nsp = 0;
    int nos = n;
    for (int i = 1; i <= n; i++)
    {
         for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nos; j++)
        {
            printf("*");
        }
       
        nos = nos - 2;
        nsp++;
        printf("\n");
    }
    return 0;
}