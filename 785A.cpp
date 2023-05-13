#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string pol[n];
    int count=0;

    for(int i=0; i<n; i++){
        cin>>pol[i];

        if(pol[i]=="Tetrahedron"){
            count+=4;
        }
        if(pol[i]=="Cube"){
            count+=6;
        }
        if(pol[i]=="Octahedron"){
            count+=8;
        }
        if(pol[i]=="Dodecahedron"){
            count+=12;
        }
        if(pol[i]=="Icosahedron"){
            count+=20;
        }
    }
    cout<<count<<endl;

    return 0;
}
