#include<stdio.h>
int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        if(a==1999) {
            printf("Correct\n");
            break;
        } else printf("Wrong\n");
    }

    return 0;
}