#include <iostream>
using namespace std;

void func(int t){
  
  for (int i=0; i < t; i++){
    short A, B;
    cin >> A >> B;
    cout << "Case #" << i+1 << ": " << A+B << '\n';
  }
}

int main(){
  int t;

	cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;
  func(t);

  return 0;
}