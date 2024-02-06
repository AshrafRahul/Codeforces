#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int set[25];
    for(int i=1; i<=n; i++)  cin >> set[i];
 
    int chest=0, biceps=0, back=0;
    for(int i=1; i<=n; i++) {
        if(i%3 == 2) biceps += set[i];
        else if(i%3 == 0) back += set[i];
        else if(i%3 == 1) chest += set[i];
    }
 
    int exercise = max ({chest, biceps, back});
 
    if(exercise == chest) cout << "chest" << endl;
    else if(exercise == biceps) cout << "biceps" << endl;
    else if(exercise == back) cout << "back" << endl;
 
    return 0;
}