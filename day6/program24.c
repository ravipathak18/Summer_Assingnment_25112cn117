#include<stdio.h>
int power(int a,int b)
{ int pow;
    if(b==0)
    return 1;
  pow=a*power(a,b-1);
   return pow; 
}
int main()
{
    int x,n;
    printf("ENTER THE VALUE OF BASE:");
    scanf("%d",&x);
    printf("ENYTER THE VALUE OF POWER:");
    scanf("%d",&n);
    printf("THE VALUE IS: %d",power(x,n));
    return 0;
}