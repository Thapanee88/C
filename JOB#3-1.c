#include<stdio.h>

int main()
{
    int a[50], b[50], c[50], i=0, j=0, k=0, n, m;
    printf("input set a :\n");
    printf("-------------\n");
    do{
        i++;
        printf("a[%d]\t= ", i);
        scanf("%d", &a[i]);
    }while(a[i]>0);
    printf("\ninput set b :\n");
    printf("-------------\n");
    do{
        j++;
        printf("b[%d]\t= ", j);
        scanf("%d", &b[j]);
    }while(b[j]>0);
    printf("\n-------------\n");
    n = i-1;
    m = j-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i]==b[j]){
                c[k] = b[j];
                k++;
            }
        }
    }
    printf("The intersection of set a and b : ");
    if(k==0){
        printf("empty set");
    }
    else{
        printf("(");
        for(i=0;i<k;i++){
            printf("%d ", c[i]);
        }
        printf(")");
    }
    return 0;
}
