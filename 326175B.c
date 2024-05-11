#include<stdio.h>
int main() {
    long long int a,b,k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if(a%k==0 && b%k==0) printf("Both\n");
    if(a%k==0 && b%k!=0) printf("Memo\n");
    if(a%k!=0 && b%k==0) printf("Momo\n");
    if(a%k!=0 && b%k!=0) printf("No One\n");

    return 0;
}