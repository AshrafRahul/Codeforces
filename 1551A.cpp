#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        int a,x;
        cin>>a;

        x=a/3;

        if(((x*1)+((x+1)*2))==a) cout<<x<<" "<<x+1<<endl;
        if(((x*1)+(x*2))==a) cout<<x<<" "<<x<<endl;
        if((((x+1)*1)+(x*2))==a) cout<<x+1<<" "<<x<<endl;
    }

    return 0;
}
