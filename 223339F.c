#include<stdio.h>

void array(int a[], int i, int n) {
    if(i==n) return;
    array(a, i+1, n);
    if(i%2==0) printf("%d ", a[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    array(a, 0, n);

    return 0;
}