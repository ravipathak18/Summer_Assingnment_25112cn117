#include<stdio.h>
void main()
{
  int n,prime=1,i;
  printf("ENTER THE NUMBER TO BE CHEKED ");
  scanf("%d",&n);
  if(n==1)
  {
    printf("1 IS NITHER PRIME NOR COMPOSITE");
  }
  else 
  {
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
             break; 
        }
    } 

        if(prime) 
        {
           
            printf("%d IS A PRIME NUMBER ",n);
        }
        else 
        {
          printf("%d IS  NOT PRIME NUMBER ",n);
        }
    
  }
}