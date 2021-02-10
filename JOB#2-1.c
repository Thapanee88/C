#include <stdio.h>

int main()
{
    int n, i, j;
    printf("End : ");
    scanf("%d", &n);
    printf("  ");
    for(i=1;i<=n;i++)
    {
        printf("%4d", i);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++){
            if(j==0)
            {
                printf("%2d", i);
            }
            else if(i>=j)
            {
                printf("%4d", i*j);
            }
        }
        printf("\n");
    }
    return 0;
}
