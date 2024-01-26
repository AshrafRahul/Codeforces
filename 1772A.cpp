#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string n;
        cin >> n;

        int a = n[0]-'0';
        int b = n[2]-'0';

        cout << a+b << endl;
    }

    return 0;
}