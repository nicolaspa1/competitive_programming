#include <iostream>
using namespace std;

int main(){
  int v,t,s,d;
  cin >> v >> t >> s >>d;

  if(d < t*v || d> s*v ){
    cout << "Yes";
  }
  else{
    cout << "No";
  }

  return 0;
}