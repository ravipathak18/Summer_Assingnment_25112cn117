#include<stdio.h>
int add(int n){
    
    if(n==0)
    return 0;
   return n+add(n-1);
    
}
int main()
{
    int n;
    printf("ENTER THE NUMBER UP TO WHICH SUM IS CALCULATED:");
    scanf("%d",&n);

    printf("THE SUM OF THE NUMBER IS %d", add(n));
    return 0;
}