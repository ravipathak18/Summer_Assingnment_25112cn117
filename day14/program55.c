#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMEMT PRESENT IN THE ARRAY :");
    scanf("%d", &n);
    int arr[n], i;
    printf("ENTER THE ELEMENT OF THE ARRAY :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int sec_max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max && arr[i] < max)
        {
            sec_max = arr[i];
        }
    }
    printf("THE SECOND MAXIMUM ELEMENT IS %d", sec_max);
    return 0;
}