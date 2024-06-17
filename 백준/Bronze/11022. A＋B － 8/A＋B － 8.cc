#include <iostream>
using namespace std;

void func(int number){
  
  for (int i=0; i < number; i++){
    short A, B;
    cin >> A >> B;
    cout << "Case #" << i+1 << ": ";
    cout << A << " + " << B << " = " << A+B << '\n';
  }
}

int main(){
  int number;

	cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> number;
  func(number);

  return 0;
}