#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], sum=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]) sum++;
    }
    cout<<sum<<endl;

    return 0;
}
