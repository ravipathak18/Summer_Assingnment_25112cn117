#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY :");
    scanf("%d",&n);
    int arr[n],i;
    printf("ENTER THE ELEMENT OF THE ARRAY:");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("THE INPUT ARRAY IS :");
        for(i=0;i<n;i++){
     printf("%d\t",arr[i]);
    }
return 0;
}