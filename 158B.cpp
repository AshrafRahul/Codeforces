#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0, c=0, d=0, count=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i]==1) a++;
        if(arr[i]==2) b++;
        if(arr[i]==3) c++;
        if(arr[i]==4) d++;
    }

    count+=d;

    while(a!=0 && c!=0){
        c-=1;
        a-=1;
        count+=1;
    }

    if(a==0 && c!=0){
        count+=c;
        c=0;
    }

    count+=b/2;

    if(b%2!=0){
        if(a<=2){
            count+=1;
            a=0;
            b=0;
        } else{
            a-=2;
            count+=1;
            b=0;
        }
    }
    if(a!=0){
        count+=a/4;
        if(a%4!=0) count+=1;
    }
    cout << count << endl;

    return 0;
}