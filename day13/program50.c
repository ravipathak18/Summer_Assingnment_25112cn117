#include<stdio.h>
int main()
{
   int n,sum=0,average=0;
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY :");
    scanf("%d",&n);
    int arr[n],i;
    printf("ENTER THE ELEMENT OF THE ARRAY:");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++){
        sum+=arr[i];
        average=sum/n;
      }
      printf("THE SUM OF THE ELEMENT OF THE ARRAY IS %d AND THE AVERAGE OF ALL THE ELEMENT IS %d",sum,average);
return 0;
}