#include<stdio.h>
int ispalindrome(int n){
    int orignol=n;
    int temp,rev=0;
    while(n!=0){
         temp=n%10;
         rev=temp+rev*10;
         n=n/10;
    }
    if(orignol==rev){
    return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    if(ispalindrome(n)){
        printf("THE ENTERD NUMBER IS PALINDROME");
    }
    else{
        printf("ENTERD NUMBER IS NOT A PALINDROME");
    }
    return 0;
}