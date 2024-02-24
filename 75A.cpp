#include<bits/stdc++.h>
using namespace std;

int removeZero (int num) {
    int result = 0;
    int multiplier = 1;
    
    while(num > 0) {
        int digit = num%10;
        num/=10;
        
        if(digit!=0) {
            result += digit*multiplier;
            multiplier *= 10;
        }
    }
    return result;
}

int main() {
    int a,b,c;
    cin >> a >> b;
    
    c = a+b;
    
    int a1 = removeZero(a);
    int b1 = removeZero(b);
    int c1 = removeZero(c);
    
    if(a1+b1 == c1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}