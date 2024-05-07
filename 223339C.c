#include<stdio.h>

void print(int i) {
    if(i==0) return;
    if(i==1) printf("%d", i);
    else printf("%d ", i);
    print(i-1);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}