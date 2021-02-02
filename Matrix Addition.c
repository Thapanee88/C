#include<stdio.h>

int main(){
    int m, n, i, j;
    int matrix_1[m][n], matrix_2[m][n], matrix_3[m][n];
    scanf("%d %d", m, n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix_1[m][n]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix_2[m][n]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix_3[i][j] =  matrix_1[i][j] + matrix_2[i][j];
            printf("%d ", matrix_3[i][j]);
        }
        printf("\n");
    }

	return 0;
}
