#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum1=0, sum2=0, sum3=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        sum1 = sum1+a;
        sum2 = sum2+b;
        sum3 = sum3+c;
    }
    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
