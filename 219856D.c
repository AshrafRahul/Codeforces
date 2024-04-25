#include<stdio.h>
#include<string.h>
int main() {
    char a[11],b[11];
    scanf("%s %s", a,b);

    char s[22];
    strcpy(s,a);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s\n", strcat(s,b));

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a,b);

    return 0;
}