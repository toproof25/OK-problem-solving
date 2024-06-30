#include <iostream>
#include <cmath>
using namespace std;

int change_number(int i, int b, char value)
{
  int number;
  if ('0' <= value && value <= '9')
    number = value - 48;
  else
    number = value - 55;

  int result = number*(pow(b, i)); // pow 제곱 연산 (밑, 지수)
  return result;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  std::string value;
  int b;
  cin >> value >> b;

  int decimal_number = 0;
  int size = value.size();
  for (int i=0; i<size; ++i)
  {
    int decimal = change_number(size-i-1, b, value[i]);
    decimal_number += decimal;
  }

  cout << decimal_number;

  return 0;

} 
