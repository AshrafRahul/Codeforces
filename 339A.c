#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    gets(s);

    int len = strlen(s);
    int temp;
    int i,j;

    for(i=0; i<len; i+=2){
        for(j=i+2; j<len; j+=2){
            if(s[i]>s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s\n", s);

    return 0;
}
