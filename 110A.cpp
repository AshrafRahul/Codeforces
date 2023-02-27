#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int dig, count=0;;
    cin>>n;

    while(n!=0){
        dig = n%10;
        if(dig==4 || dig==7) count++;
        n/=10;
    }
    if(count==4 || count==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
