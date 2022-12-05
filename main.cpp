#include <iostream>
#include "lib.h"
using namespace std;
bool giovannino(char &a);

int main(){
    char a;
    cin >> a;
    if(giovannino(a))
        cout<<a;
    else cout <<"errore";
  return 0;
}
