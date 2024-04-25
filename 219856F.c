#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);

    char c[100];
    for(int i=0; i<n; i++) {
        scanf("%s", c);

        int len = strlen(c);
        if(len <= 10) printf("%s\n", c);
        else printf("%c%d%c\n", c[0], len-2, c[len-1]);
    }

    return 0;
}