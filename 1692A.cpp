#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int a,b,c,d, count=0;
        cin >> a >> b >> c >> d;

        if(a<b) count++;
        if(a<c) count++;
        if(a<d) count++;

        cout << count << endl;
    }

    return 0;
}