#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    int a,b;
    while(n--){
        cin>>a>>b;

        if(b-a>=2) count++;
    }
    cout<<count<<endl;

    return 0;
}
