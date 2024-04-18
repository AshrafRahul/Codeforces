#include<stdio.h>
#include<stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    long long int a[t], sum=0;
    for(long long int i=0; i<t; i++) {
        scanf("%lld", &a[i]);
        sum+=a[i];
    } printf("%lld\n", llabs(sum));

    return 0;
}