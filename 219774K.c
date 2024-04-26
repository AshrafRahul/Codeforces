#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int sum=0;
    for(int i=0; i<n; i++) {
        char a;
        scanf(" %c", &a);
        sum += a-'0';
    } printf("%d\n", sum);

    return 0;
}