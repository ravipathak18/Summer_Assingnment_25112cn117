#include<stdio.h>
int main()                   
{
    int n,sum=0,i;
    printf("ENTER THE NUMBER UP TO WHICH SUM TO BE DONE:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("THE SUM OF N NUMBER OF DIGIT ARE:%d",sum);
    return 0;
}