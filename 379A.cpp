#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int totalHour = 0;
    totalHour += a;

    while(a>=b){
        int newCandles = a/b;
        totalHour += newCandles;
        a = newCandles + (a%b);
    } cout << totalHour << endl;

    return 0;
}