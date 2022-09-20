#include<stdio.h>

int main(){
    char a[50];
    int i, j, n, c=0;
    scanf("%d", &n);
    scanf("%s", a);

    for(i=0; i<n; i++){
        if(a[i]==a[i+1]){
            c++;
        }
    }
    printf("%d", c);

    return 0;
}
