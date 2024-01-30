#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1==x2) {
        int sideLength = abs(y2-y1);
        cout << x1+sideLength << " "<< y1 << " "<< x2+sideLength << " "<< y2 << endl;
    } else if(y1==y2) {
        int sideLength = abs(x2-x1);
        cout << x1 << " "<< y1+sideLength << " "<< x2 << " "<< y2+sideLength << endl;
    } else {
        if(abs(x2-x1)==abs(y2-y1)){
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        } else cout << "-1" << endl;
    }

    return 0;
}