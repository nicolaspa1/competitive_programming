#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,eliminado;
    cin >> n >> eliminado;
  vector<int> arreglo(n);
  for(int i = 0; i<n; ++i){
      int y;
      cin >> y;
      if(eliminado!=y){
          arreglo[i] = y;
          }
      }
      
      for(int i = 0; i<n; ++i){
          if(arreglo[i] !=0){
      cout << arreglo[i] << " "; 
      }
      }
      
      
}