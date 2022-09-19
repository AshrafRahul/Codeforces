#include<stdio.h>
#include<string.h>

int main(){
    int n, m;
    scanf("%d", &n);
    char str[100];

    for(int i=1; i<=n; i++){
        scanf("%s", &str);
        m=strlen(str);
        if(m>10){
            printf("%c%d%c\n", str[0], m-2, str[m-1]);
        }
        else{
            printf("%s\n", str);
        }
    }

    return 0;
}
