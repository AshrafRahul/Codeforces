#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    long long int a[t];
    for(int i=0; i<t; i++) {
        scanf("%lld", &a[i]);
    }
    long long int num;
    scanf("%lld", &num);

    int count=0, cnt=0;
    for(int i=0; i<t; i++) {
        if(a[i] == num) count++;
        else cnt++;       
    }

    if(count > 0) {
        for(int i=0; i<t; i++) {
            if(a[i] == num) {
                printf("%d\n", i);
                break;
            }
        }
    } else printf("-1\n");

    return 0;
}