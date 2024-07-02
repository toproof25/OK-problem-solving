#include <iostream>
using namespace std;

// value에 따라 숫자 or 알파벳을 출력하는 함수
void number_to_ASCII(int value)
{
  if (value < 10)
    cout << char(value + 48);
  else
    cout << char(value + 55);
}

// 재귀를 이용하여 진법 변환 연산을 수행하는 함수
int change_number(int b, int value)
{
  if (value/b == 0){
    number_to_ASCII(value);
    return value;
  }

  change_number(b, value/b);
  number_to_ASCII(value%b);
  return value;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int value, b;
  cin >> value >> b;

  change_number(b, value);

  return 0;
} 
