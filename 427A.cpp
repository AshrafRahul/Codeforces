#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count=0, nrecrt=0;
    while(n--){
        int a;
        cin >> a;

        if(a>0) count += a;
        if(a<0){
            if(count > 0) count--;
            else nrecrt++;
        }
    }

    cout << nrecrt << endl;

    return 0;
}