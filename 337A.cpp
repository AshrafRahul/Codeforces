#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    vector<int> puzzle(m);

    for(int i=0; i<m; i++){
        cin >> puzzle[i];
    }

    sort(puzzle.begin(), puzzle.end());

    int minDif = INT_MAX;

    for(int i=0; i+n-1<m; i++){
        int maxP = puzzle[i+n-1];
        int minP = puzzle[i];
        int dif = maxP - minP;
        minDif = min(minDif, dif);
    }

    cout << minDif << endl;

    return 0;
}