#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int sum=0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            sum += a;
        }

        if(sum<n) cout<<"1"<<endl;
        else cout<<sum-n<<endl;
    }

    return 0;
}
