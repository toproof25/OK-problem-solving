#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  for (int i=0; i<number; ++i)
  {
    int change, share;
    cin >> change;

    share =  change / 25;
    cout << share << ' ';
    change %= 25;

    share = change / 10;
    cout << share << ' ';
    change %= 10;

    share = change / 5;
    cout << share << ' ';
    change %= 5;

    share = change / 1;
    cout << share << '\n';
  }


  return 0;

} 
