#include<stdio.h>
int main()
{
    int n,mal=1,temp=0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    if (n==0)
    {
       mal =0;
    }
    else
    {
    while(n!=0)
    {
        temp=n%10;
        mal=mal*temp;
        n=n/10;
    }

}
printf("THE PRODUCT OF THE DIGIT OF THE NUMBER ARE : %d",mal);
return 0;
}