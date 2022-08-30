#include<stdio.h>
#include<string.h>
int main(){
    char a[500];
    int i, n, count=0;
    scanf("%s", &a);

    n = strlen(a);

    for(i=0; i<n; i++){
        if(a[i]==a[i+1]){
            count++;
            if(count>=6){
            printf("YES\n");
            return 0;
            }
        }
        else{
            count=0;
        }
    }
    printf("NO\n");

    return 0;
}
