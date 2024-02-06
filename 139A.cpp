#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
 
    int pages[7];
    for(int i=0; i<7; i++)  cin >> pages[i];
 
    int remainingPages = n;
    int day = 0;
 
    while(remainingPages > 0) {
        for(int i=0; i<7; i++) {
            remainingPages -= pages[i];
 
            if(remainingPages <=0) {
                day = i+1;
                break;
            }
        }
    } cout << day << endl;
 
    return 0;
}