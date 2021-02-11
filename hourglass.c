#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the height of the hourglass : ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i==j||i+j==9||i==0||i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
