#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],sum1=0,sum2=0,count=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum1+=a[i];
    }
    sum1=sum1/2;
    sort(a,a+n);
    for(int j=n-1; j>=0; j--){
        sum2+=a[j];
        count++;
        if(sum1<sum2) break;
    }
    cout<<count<<endl;

    return 0;
}
