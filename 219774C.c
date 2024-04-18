#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    int a[t];
    for(int i=0; i<t; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0) printf("1 ");
        else if(a[i] < 0) printf("2 ");
        else printf("%d ", a[i]);
    } printf("\n");

    return 0;
}