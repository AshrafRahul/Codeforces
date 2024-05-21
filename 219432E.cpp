#include<bits/stdc++.h>
using namespace std;

int maxNum(int a[], int n) {
    int max_element = a[0];
    for(int i=1; i<n; i++) {
        if(a[i] > max_element) max_element = a[i];
    } return max_element;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int maximumNumber = maxNum(a, n);
    cout << maximumNumber << endl;

    return 0;
}