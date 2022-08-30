#include <stdio.h>
#include<string.h>
int main(){
    int i, n, count=0;
    char s[100];
    scanf("%s", &s);

    n=strlen(s);

    for(i=0; i<n; i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            count++;
        }
    }
    if(count>=1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
