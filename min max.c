#include<stdio.h>

int main(){
    int c, i, m, M;
    printf("enter count : ");
	scanf("%d", &c);
	int num[c];
	for(i=0;i<c;i++){
        printf("enter number %d : ", i+1);
        scanf("%d", &num[i]);
	}
	m = num[0];
	M = num[0];
    for(i=0;i<c;i++){
        if(m > num[i]){
            m = num[i];
        }
        else if(M < num[i]){
            M = num[i];
        }
	}
	printf("min : %d\n", m);
	printf("max : %d", M);
	return 0;
}
