#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,t,i;
    string s;
    cin>>n>>t>>s;

    while(t--){
        for(i=0; i<n; i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
