#include<stdio.h>

int main()
{
    int i, j, m, n;
    float average=0;
    printf("inter order of matrix A m.n = ");
    scanf("%d.%d", &m, &n);
    int a[m][n];
    printf("input element of matrix A\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%5d", a[i][j]);
            average = average + a[i][j];
        }
        printf("   Average of row%3d = %6.2f", i, average/n);
        average = 0;
        printf("\n");
    }
    printf("------------------------------------------------");
    return 0;
}
