#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;

        for(int i=0; ;i++){
            if(i%3==0 || i%10==3) continue;
            if(--k==0){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
