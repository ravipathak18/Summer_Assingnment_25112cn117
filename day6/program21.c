#include<Stdio.h>
int main()
{
    int n,binary[32],i=0;
    printf("ENTER THE DECIMAL NUMBER :");
    scanf("%d",&n);
    while (n>0)
    {  
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    printf("THE BINARY OF THE NUMBER IS :");

    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}