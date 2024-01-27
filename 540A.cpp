#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    string originalState;
    cin >> originalState;

    string targetCombination;
    cin >> targetCombination;

    int totalMoves = 0;
    for(int i=0; i<n; i++){
        int absoluteDifference = abs(originalState[i] - targetCombination[i]);
        int moves = min(absoluteDifference, 10-absoluteDifference);

        totalMoves += moves;
    } cout << totalMoves << endl;

    return 0;
}