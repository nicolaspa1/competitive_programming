#include<bits/stdc++.h>
using namespace std;
int fb(int);
int main(){
    int target;
    cin >> target;
    cout << fb(target)<<endl;
}
int fb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
    return fb(n-1)+fb(n-2);
    }
}

