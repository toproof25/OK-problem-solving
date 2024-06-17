#include <iostream>
using namespace std;

void func(){
  short A, B;
  while (cin >> A >> B)
    cout << A+B << '\n';

}

int main(){
  func();
  return 0;
}