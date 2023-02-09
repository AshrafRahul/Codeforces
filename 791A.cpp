#include<bits/stdc++.h>

using namespace std;
int main(){
    int l,b,i;
    cin>>l>>b;
    for(i=1; i<=100; i++){
        l=l*3;
        b=b*2;
        if(l>b){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
