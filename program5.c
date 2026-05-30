#include<stdio.h>
void main()
{
    int n ,sum=0,temp=0,i;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    if(n==0){
        sum=0;
    }
    else {
    while(n!=0){
     temp=n%10;
     sum+=temp;
     n=n/10;
    }   
}
printf("THE SUM OF NUMBER %d",sum);

}