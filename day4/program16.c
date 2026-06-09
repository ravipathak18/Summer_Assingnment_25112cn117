#include<stdio.h>
int isarmstrong(int n){
    int realno=n,sum=0;
    while (n>0){
        int temp=n%10;
        sum=sum+temp*temp*temp;
        n=n/10;
    }
    if(sum==realno)
    return sum;
    else return 0;

}
int main(){
     int lower_limit,upper_limit,i;
     printf("ENTER THE VALUE OF LOWER LIMIT:");
     scanf("%d",&lower_limit);
      printf("ENTER THE VALUE OF UPPER LIMIT:");
     scanf("%d",&upper_limit);
     for(i=lower_limit;i<=upper_limit;i++){
        if(isarmstrong(i)){
        printf("%d ",i);
     }
}
    return 0;
}