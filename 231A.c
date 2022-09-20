#include<stdio.h>
int main(){
    int n, a, b, c, count=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d %d %d", &a, &b, &c);

        if((a+b+c)>=2)
        {
            count++;
        }
    }
    printf("%d", count);
}
