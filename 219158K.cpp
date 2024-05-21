#include<bits/stdc++.h>
using namespace std;

int minNumber(int a, int b, int c) {
    int mini = a;
    if(b < mini) mini = b;
    if(c < mini) mini = c;
    return mini;
}

int maxNumber(int a, int b, int c) {
    int maxi = a;
    if(b > maxi) maxi = b;
    if(c > maxi) maxi = c;
    return maxi;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << minNumber(a, b, c) << " " << maxNumber(a, b, c) << endl; 

    return 0;
}