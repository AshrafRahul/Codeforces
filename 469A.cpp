#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[250];
    int n,a,b,count=0;
    cin>>n;

    cin>>a;
    for(int i=0; i<a; i++) cin>>arr[i];
    cin>>b;
    for(int i=a; i<a+b; i++) cin>>arr[i];

    sort(arr, arr+(a+b));

    for(int i=0; i<a+b; i++){
        if(arr[i]!=arr[i+1]) count++;
    }

    if(n==(count)) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
