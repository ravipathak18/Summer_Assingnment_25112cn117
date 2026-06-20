#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:");
    scanf("%d", &n);
    printf("ENTER THE NUMBER TO BE SERCHED:");
    scanf("%d", &x);
    int arr[n], i;
    printf("ENTER THE ELEMENT OF THE ARRAY IS :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            ;

        count++;
    }
    printf("THE FREQUENCY OF THE SERCHED ELEMENT IS : %d",count );
    return 0;
}