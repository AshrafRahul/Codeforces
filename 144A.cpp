#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], maxi=0, mini=101, maximum, minimum;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]>maxi){
            maxi=a[i];
            maximum=i;
        }
        if(a[i]<=mini){
            mini=a[i];
            minimum=i;
        }
    }
    if(maximum>minimum) minimum++;

    cout<<maximum+(n-1)-minimum;

    return 0;
}
