#include<bits/stdc++.h>
using namespace std;
int factorial(int);
int main(){
    int target;
    cin >> target;
    cout << factorial(target)<<endl;
}
int factorial(int n){
    if(n==0){
        return 1;
    }else{
    return n*factorial(n-1);
    }
}
