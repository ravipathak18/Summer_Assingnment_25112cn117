#include<stdio.h>
void main()
{
    int n,rev=0,orignal_no,temp=0;
    printf("ENTER THE NO.:");
    scanf("%d",&n);
    orignal_no = n;
    if(n==0)
    {
        rev=0;
    }
    else
    {
        while(n!=0)
        {   temp=n%10;
            rev=temp+rev*10;
            n=n/10;
        }
    }
 if (rev==orignal_no)
 {
    printf("THE NUMBER  %d IS PALINDROME ",orignal_no);
 }
 else 
 {
    printf("THE NUMBER %d IS NOT A PALINDROME ",orignal_no);
 }
}
