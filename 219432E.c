#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);

    int max=INT_MIN;
    while(n--) {
        long long int num;
        scanf("%lld", &num);

        if(num > max) max = num;
    } printf("%d\n", max);

    return 0;
}