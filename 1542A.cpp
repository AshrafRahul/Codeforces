#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count=0;
        for(int i=0; i<n*2; i++){
            int a;
            cin>>a;

            if(a%2!=0) count++;
        }
        if(count==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
