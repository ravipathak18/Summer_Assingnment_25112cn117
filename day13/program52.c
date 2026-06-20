#include<stdio.h>
int main()
{
    int n,count_odd=0,count_even=0,i;
    printf("ENTER THE NUMBER OF ELEMNT IN THE ARRAY:");
    scanf("%d",&n);
    int array[n];
    printf("ENTER THE ELEMENT OF THE ARRAY :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
       for(i=0;i<n;i++){
        if(array[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
       }
       printf("THE NUMBER OF EVEN ELEMENT IS %d AND ODD ELEMENT IS %d",count_even,count_odd);
       return 0;
}