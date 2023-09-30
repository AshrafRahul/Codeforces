#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], count=0, high, low;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    high = low = a[0];
    
    for(int i=1; i<n; i++){
        if(high < a[i]){
            count++;
            high = a[i];
        }
        if(low > a[i]){
            count++;
            low = a[i];
        }
    }

    cout << count << endl;

    return 0;
}