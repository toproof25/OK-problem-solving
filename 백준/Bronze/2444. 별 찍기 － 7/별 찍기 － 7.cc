#include <iostream>
using namespace std;

int main(){
  int star;
  cin >> star;

  int repeat = -1;

  for (int i=1; i < 2*star; i++){
    repeat = (i > star) ? repeat-2 : repeat+2;
    
    for (int blank = 0; blank < std::abs(star - i); blank++)
      cout << ' ';

    for (int s = 0; s < repeat; s++)
      cout << '*';

    cout << '\n';
  }

  return 0;
}