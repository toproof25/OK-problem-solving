#include <iostream>
using namespace std;

void func(short number){
  
  for (short i=0; i < number; i++){

    for (short j=number-i; j > 1; j--)
      cout << ' ';

    for (short k=0; k <= i; k++)
      cout << '*';
    
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