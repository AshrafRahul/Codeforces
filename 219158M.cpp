#include<bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;

    if(x>='0' && x<='9') cout << "IS DIGIT" << endl;
    else if(x>='a' && x<='z' || x>='A' && x<='Z') {
        cout << "ALPHA" << endl;
        if(x>='A' && x<='Z') cout << "IS CAPITAL" << endl;
        else if(x>='a' && x<='z') cout << "IS SMALL" << endl;
    }

    return 0;
}