#include<stdio.h>
int main() {
    char c;
    scanf("%c", &c);

    char nextChar = c+1;

    if(nextChar > 'z') nextChar = 'a';
    
    printf("%c\n", nextChar);

    return 0;
}