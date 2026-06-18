#include<stdio.h>
int sum(int a,int b){
 return a+b;
}
int main()
{
    int num1,num2;
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&num1);
     printf("ENTER THE SECOND NUMBER ");
    scanf("%d",&num2);
    
    printf("THE SUM OF THE TWO NUMBER IS %d :",sum(num1,num2));
    return 0;

}