#include<stdio.h>
int main()
{
   int n,rev=0,temp=0;
   printf("ENTER THE NUMBER  TO BE REVERSED ");
   scanf("%d",&n);
   for (;n!=0;n=n/10)
   {
     temp=n%10;
     rev=temp+rev*10;

   } 
   printf("THE REVERSED NUMBER IS %d",rev);
   return 0;
}