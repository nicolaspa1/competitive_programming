#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);

int mayor=0,n,answer=0,aux=0;

cin >> n;
vector<int>array(n);
    for(int i =0; i<n; ++i){
        cin >> array[i];
    }
    for(int i =0; i<n; ++i){
        if(array[i]>mayor){
            mayor=array[i];
        }
    }
    for(int i =0; i<n; ++i){
        aux=(array[i]-mayor)*-1;
        answer+=aux;
    }
    cout << answer;


return 0;

}