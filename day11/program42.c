#include<stdio.h>
#include<limits.h>

int maximum(int arr[],int n){
    
     int max=INT_MIN;
     for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
     }
     return max;
}
int main()
{
    int n;
   printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:");
   scanf("%d",&n);
   int arr[n],i;
   printf("ENTER THE ELEMENT OF THE ARRAY");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   printf("THE MAXIMUM OF ALL THE VALUES IS :%d",maximum(arr,n));
   return 0;

}