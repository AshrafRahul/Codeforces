#include<bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin>>s;

    int up=0, low=0;
    for (int i=0; i<s.size(); i++) {
        if(isupper(s[i])) {
            up++;
        }
        else {
            low++;
        }
    }

    if(up>low) {
        char ch;
        for(int i=0; i<s.size(); i++) {
            ch = toupper(s[i]);
            cout<<ch;
        }
    }

    else {
        char ch;
        for(int i=0; i<s.size(); i++) {
            ch = tolower(s[i]);
            cout<<ch;
        }
    }


    return 0;
}