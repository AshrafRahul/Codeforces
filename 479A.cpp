#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int val1, val2, val3, val4, val5;
    val1 = a + b * c;
    val2 = a * (b + c);
    val3 = a * b * c;
    val4 = (a + b) * c;
    val5 = a + b+ c;

    int largest = val1;

    if(val2 > largest) largest = val2;
    if(val3 > largest) largest = val3;
    if(val4 > largest) largest = val4;
    if(val5 > largest) largest = val5;

    cout << largest << endl;

    return 0;
}