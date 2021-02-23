#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long int n,espacio,answer=0,cancion,comprimida,pesoc=0,aux=0,sinComprimir=0;
    cin >> n >> espacio;
  vector<int> arreglo(n);
  vector<int> arreglo2(n);
  for(int i = 0; i<n; ++i){
        cin >> cancion >> comprimida;
        arreglo2[i]=cancion-comprimida;
        sinComprimir+=cancion;
        pesoc += comprimida;
      }
    if(espacio-pesoc<0){
               cout << -1;
               return 0;
              }
    if(espacio-sinComprimir>=0){
               cout << 0;
               return 0;
              }


	sort(arreglo2.begin(), arreglo2.end());

     for(int i = n-1; i >=0 ; --i){
        aux+=arreglo2[i];
        answer++;
        if(sinComprimir-aux<=espacio){
                break;
        }
      }

      cout << answer;

}