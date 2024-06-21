/* eslint-disable */

#include <iostream>
#include <string>

using namespace std;

int func(char _numbers[], int number){
  int sum = 0;
  for (int i=0; i<number; i++)
    sum += (_numbers[i] - '0'); // 아스키 코드에서 숫자 0값을 빼서 정수로 변환될 때 아스키 값이 0~9값을 가질 수 있도록 설정
  return sum;
}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  char *numbers = new char[number];
  cin >> numbers;
  int result = func(numbers, number);
  cout << result;
  delete[] numbers;

  return 0;
}