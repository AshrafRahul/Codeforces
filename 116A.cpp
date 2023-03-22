#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int sum=0,k=0;

    while(n--){
        cin>>a>>b;
        sum =(a+k)-b;
        if(sum<0) k=0;
        else k=sum;
    }
    cout<<k<<endl;

    return 0;
}
