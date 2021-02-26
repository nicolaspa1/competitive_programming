#include <iostream>
using namespace std;

  int main(){

    int n;
    cin >> n;
    int a,b,c,answer=0;

    for(int i = 0; i < n; i++){
      cin >> a >> b >> c;
      int x = a+b+c;

      if(x>=2){
        answer++;
      }
    }
    cout << answer << endl;


    return 0;
  }