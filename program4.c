#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }
    else{
        while(n!=0){
            count++;
            n=n/10;
        }
    }
    printf("THE  NUMBER OF DIGITS IN THE NUMBER ARE %d",count );
    return 0;
}