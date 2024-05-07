#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int primDiag=0, secDiag=0;
    for(int i=0; i<n; i++) {
        primDiag+=a[i][i];
        secDiag+=a[i][n-i-1];
    }
    printf("%d\n", abs(primDiag-secDiag));

    return 0;
}