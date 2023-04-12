#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;

        int moves=0;
        if(a%b!=0) moves=b-(a%b);

        cout<<moves<<endl;
    }

    return 0;
}
