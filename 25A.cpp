#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n], count=0, cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i]%2==0) count++;
        else cnt++;
    }

    if(count>cnt){
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0) cout << i+1 << endl;
        }
    } else{
        for(int i=0; i<n; i++){
            if(arr[i]%2==0) cout << i+1 << endl;
        }
    }

    return 0;
}