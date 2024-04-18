#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0], pos=0;
    for(int i=0; i<n; i++) {
        if(a[i] < min) {
            min = a[i];
            pos = i;
        }
    } printf("%d %d\n", min, pos+1);

    return 0;
}