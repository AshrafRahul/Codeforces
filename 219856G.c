#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char c[100000];
    scanf("%s", c);

    for(int i=0; c[i]!='\0'; i++) {
        if(c[i] == ',') c[i]=' ';
    }
    for(int i=0; c[i]!='\0'; i++) {
        if(isupper(c[i])) c[i] = tolower(c[i]);
        else if(islower(c[i])) c[i] = toupper(c[i]);
    }

    printf("%s\n", c);

    return 0;
}