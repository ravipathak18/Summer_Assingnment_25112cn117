#include<stdio.h>
int main()
{
    long long n,rem,place=1,decimal=0;
    printf("ENTER THE BINARY NUMBER :");
    scanf("%lld",&n);
    while(n>0)
    {
      rem=n%10;
      decimal=decimal+rem*place;
      place=place*2;
        n=n/10;
    }
    printf("THE DECIMAL NUMBER IS: %d",decimal);
  return 0;

}