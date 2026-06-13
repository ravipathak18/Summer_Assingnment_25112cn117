#include<stdio.h>
int main()
{
    int n,setbits=0;;
    printf("ENTER THE DECIMAL NUMBER :");
    scanf("%d",&n);
    while (n>0)
    {   
        if(n%2==1){
             setbits++;
        }
        n=n/2;
       
    }
    printf("THE NUMBER OF BITS IN THE NUMBER IS %d",setbits);
    return 0;
}