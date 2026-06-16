#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS OR COLUMN ");
    scanf("%d",&n);
    int nsp=n;
    int nos=1,i,j,k;
    for(i=1;i<=n;i++){
        for(k=1;k<=nsp;k++){
            printf(" ");
        }
        for(j=1;j<=nos;j++){
            printf("*");
        }
        nos=nos+2;
        nsp--;
        printf("\n");

    }
    printf("\n");
}