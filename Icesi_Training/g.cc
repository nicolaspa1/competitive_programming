#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
int matriz [10][10];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         if( i == 0){
              matriz[i][j] = 1;
             }else if(j==0){
                 matriz[i][j] = 1;
                 }else{
                     matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
                     }
        }
    }
    cout<< matriz[n-1][n-1] ;

return 0;

}