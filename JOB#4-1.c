#include <stdio.h>

int main()
{
    char sentence[500];
    int i=0, n=0;
    printf("Input sentence : ");
    gets(sentence);
    while(sentence[i] != '\0'){
        if(sentence[i] >= 97 && sentence <= 122){
            sentence[i] = sentence[i] - 32;
        }
        printf("%c", sentence[i]);
        if(sentence[i] == ' '){
            printf("\n");
            n++;
        }
        i++;
    }
    printf("\nTotal = %d", n+1);
    return 0;
}
