#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("ENTER THE NUMBER TO BE CHECKED:");
    scanf("%d", &n);
    int num = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0){
    
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("THE ENTERED NUMBER IS PERFECT NUMBER ");
    }
    else{
        printf("THE ENTERED NUMBER IS NOT A PERFECT NUMBER ");
    }
    return 0;
}