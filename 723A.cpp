#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int values[] = {a,b,c};
    sort(values, values+3);

    a = values[0];
    b = values[1];
    c = values[2];

    cout << (c-b)+(b-a) << endl;

    return 0;
}