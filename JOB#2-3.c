#include <stdio.h>

int main()
{
    int a[100], i=0, n, odd[100], even[100], j=0, k=0;
    printf("input Array a :\n");
    printf("---------------\n");
    do{
        i++;
        printf("a[%d]\t= ", i);
        scanf("%d", &a[i]);

    }while(a[i]>0);
    n = i-1;
    for(i=1;i<=n;i++){
        if(a[i]%2 == 1){
            odd[j] = a[i];
            j++;
        }
        else{
            even[k] = a[i];
            k++;
        }
    }
    printf("------------------------\n");
    printf("Odd number  : ");
    for(i=0;i<j;i++){
        printf("%3d", odd[i]);
    }
    printf("\nTotal = %d", j);

    printf("\nEven number : ");
    for(i=0;i<k;i++){
        printf("%3d", even[i]);
    }
    printf("\nTotal = %d", k);
    return 0;
}
