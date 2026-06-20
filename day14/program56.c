#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMEMT PRESENT IN THE ARRAY :");
    scanf("%d", &n);
    int arr[n], i,j;
    printf("ENTER THE ELEMENT OF THE ARRAY :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("THE DUPLICATE NUMBER IS ");
        for (i = 0; i < n; i++)
        {
            for( j=i+1 ;j <n;j++){
                if (arr[i]==arr[j]){
                    printf("[%d]",arr[i]);
                    break;
                }
            }
        }

return 0;
}