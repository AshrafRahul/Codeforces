#include<stdio.h>
#include<string.h>
int main() {
    char c[1001];
    scanf("%s", c);

    char s[1001];
    int k=0;
    for(int i=0; i<=strlen(c); i++) {
        s[k] = c[i];
        k++;
    }

    for(int i=0; i<=strlen(c)/2; i++) {
        char temp = c[i];
        c[i] = c[strlen(c)-i-1];
        c[strlen(c)-i-1] = temp;
    }
    char com = strcmp(s,c);

    if(com == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}