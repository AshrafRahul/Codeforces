#include<stdio.h>
#include<limits.h>

int min(int *ar, int n) {
    int mini = INT_MAX;
    for(int i=0; i<n; i++) {
        if(mini > ar[i]) mini = ar[i];
    } return mini;
}

int max(int *ar, int n) {
    int maxi = INT_MIN;
    for(int i=0; i<n; i++) {
        if(maxi < ar[i]) maxi = ar[i];
    } return maxi;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int minimum = min(a, n);
    int maximum = max(a, n);

    // printf("%d %d\n", min(a,n), max(a,n));
    printf("%d %d\n", minimum, maximum);

    return 0;
}