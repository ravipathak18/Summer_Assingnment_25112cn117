#include<stdio.h>
int fibonacci(int n){
    if(n==2||n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
  
    printf("THE FIBONACCI SERIES DIGIT IS. : %d", fibonacci(n));
    return 0;
}