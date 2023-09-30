#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, time=240, count=0;
    cin >> n >> t;

    int i=1;
    while(n--){
        t += (5*i);
        if(t <= time){
            count++;
        } else break;
        i++;
    }

    cout << count << endl;

    return 0;
}