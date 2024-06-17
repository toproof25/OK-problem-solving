#include <iostream>
using namespace std;

void func(){
  
  while (true){
    short A, B;
    cin >> A >> B;

    if(A==0 || B==0)
      break;

    cout << A+B << '\n';

  }
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);
  func();

  return 0;
}