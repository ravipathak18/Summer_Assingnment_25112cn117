#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS OR COLUMN ");
    scanf("%d",&n);
    int nsp=n;
    int nos=1,i,j,k;
    for(i=1;i<=n;i++){
                    int a=i-1;
        for(k=1;k<=nsp;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){

            if(i<j){
                printf("%c ",a+64);
                a--;
            }
            else
            printf("%c ",j+64);
        }
       nos=nos+2;
    nsp--;
    printf("\n");
}

    }
    