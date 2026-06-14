#include<stdio.h>
int fibonacci(int n){
    if(n==0 || n==1 )
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{   int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES UP TO %d IS :",n);
    for(int i=0;i<n;i++){
    printf(" %d ",fibonacci(i));
    }
    return 0;

}