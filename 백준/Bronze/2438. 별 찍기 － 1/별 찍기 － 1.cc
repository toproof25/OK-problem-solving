#include <iostream>
using namespace std;

void func(short number){
  
  for (short i=0; i < number; i++){
    for (short j=0; j <= i; j++){
      cout << '*';
    }
    cout << '\n';
  }
}

int main(){
  short number;

	cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> number;
  func(number);

  return 0;
}