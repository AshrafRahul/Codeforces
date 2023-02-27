#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int anton=0, danik=0;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='A') anton++;
        if(s[i]=='D') danik++;
    }
    if(anton>danik) cout<<"Anton"<<endl;
    if(anton<danik) cout<<"Danik"<<endl;
    if(anton==danik) cout<<"Friendship"<<endl;

    return 0;
}
