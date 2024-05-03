#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int *b, int *c) {
    if(*a > *b) swap(a, b);
    if(*a > *c) swap(a, c);
    if(*b > *c) swap(b,c);
}

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int A=a, B=b, C=c;

    sort(&a, &b, &c);
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}