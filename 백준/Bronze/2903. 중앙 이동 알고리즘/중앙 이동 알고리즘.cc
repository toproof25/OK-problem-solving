#include <iostream>
#include <cmath>
using namespace std;

int get_dot(int value)
{
  return pow(2 + ( pow(2, value) -1), 2);
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int value;
  cin >> value;

  int result = get_dot(value);
  cout << result;

  return 0;
} 
