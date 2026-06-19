#include<stdio.h>
void fibonacci(int n){
    int num1=0,num2=1,num3;
    for(int i=1;i<=n;i++){
        printf("%d\t",num1);
        num3=num2;
        num2=num1;
        num1=num1+num3;
     }
    
}
int main()
{    int n;
    printf("ENTER THE VALUE OF N:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}