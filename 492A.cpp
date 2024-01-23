#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum=0, sSum=0, count=0;
    for(int i=1; i<=n; i++){
        sum+=i;
        sSum+=sum;

        if(sSum<=n) count++;
        else break;
    } cout << count << endl;

    return 0;
}