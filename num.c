#include <stdio.h>
#include <math.h>

int main()
{
    int n, num[1001], i, j, f=1, t, c=0;
    float min=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    for(i=0;i<n-1-c;i++){
        for(j=0;j<n-1-c;j++){
            if(num[j]==0){
                t = num[j];
                num[j] = num[n-1-c];
                num[n-1-c] = t;
                c++;
            }
        }
    }
    for(i=0;i<n-1-c;i++){
        for(j=0;j<n-1-c;j++){
            if(num[j]>num[j+1]){
                t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
        }
    }
    for(i=1;i<n-1;i++){
        for(j=1;j<n-1;j++){
            if(num[j]>num[j+1]){
                t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",num[i]);
    }
    return 0;
}
