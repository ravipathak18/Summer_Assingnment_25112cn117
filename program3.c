#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("FACTORIAL IS 1");
    }
    else
    {
        for(i=2;i<=n;i++){
            fact=fact*i;
        }
        printf("the factorial of %d is %d",n,fact);
    }
return 0;
}