#include <iostream>
using namespace std;

void func(int number){
  for (int i = 0; i < number; i+=4)
    cout << "long ";
  cout << "int";
}

int main(){
  int number;
  cin >> number;
  func(number);

  return 0;
}