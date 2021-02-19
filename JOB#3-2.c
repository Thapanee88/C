#include<stdio.h>

int main()
{
    char name[200];
    int i=0;
    printf("input your name : ");
    gets(name);
    while(name[i] != ' '){
        i++;
    }
    for(i+1;;i++){
        if(name[i]=='\0'){
            break;
        }
        else{
            printf("%c", name[i+1]);
        }
    }
    for(i=0;;i++){
        if(name[i]==' '){
            break;
        }
        else{
            printf("%c", name[i]);
        }
    }
    return 0;
}
