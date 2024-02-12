#include <iostream>
using namespace std;
int main(){
  int n, elementone;
  int precedente = 0; successivo = 1;
  cout << "ciao! quante cifre vuoi stampare della serie di fibonacci?" << endl;
  cin >> n;
  for (int i = 0; i < n; i++){
  if (i 0 =< 1){
    elemento = i;
  }
    else {
    elemento = precedente + successivo;
    precedente = successivo;
    successivo = elemento;
  }
  cout << elemento ;
  }


return 0;
}
