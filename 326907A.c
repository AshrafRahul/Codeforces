#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    if((a-b)>=0) printf("%d\n", a-b);
    else printf("0\n");

    return 0;
}