#include<stdio.h>
#include<limits.h>
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
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("THE MAXIMUM OF ALL THE ELEMENT IS %d AND THE MINIMUM OF ALL THE ELEMENT IS %d",max,min);
    return 0;
}