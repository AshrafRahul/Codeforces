#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int short1 = a+c+b;
    int short2 = a+a+b+b;
    int short3 = a+c+c+a;
    int short4 = b+c+c+b;

    cout << min({short1, short2, short3, short4}) << endl;

    return 0;
}