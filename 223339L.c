#include <stdio.h>

long long int arraySum(int a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + arraySum(a, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    printf("%lld\n", arraySum(a, n));

    return 0;
}
