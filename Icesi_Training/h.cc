#include<bits/stdc++.h>

using namespace std;

int main(){

char n[100000+1];
cin >> n;
int tam=strlen(n);
vector<int>arr(7);
    for(int i = 0; i < tam; ++i){
        if(n[i]=='B'){
            arr[0]++;
        }
         if(n[i]=='u'){
            arr[1]++;
        }
         if(n[i]=='l'){
            arr[2]++;
        }
         if(n[i]=='b'){
            arr[3]++;
        }
         if(n[i]=='a'){
            arr[4]++;
        }
         if(n[i]=='s'){
            arr[5]++;
        }
         if(n[i]=='r'){
            arr[6]++;
        }
    }
arr[1]/=2;
arr[4]/=2;
sort(arr.begin(),arr.end());
cout << arr[0] <<endl ;
return 0;

}