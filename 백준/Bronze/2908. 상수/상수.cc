#include <iostream>
#include <string>
using namespace std;

// 레퍼런스 변수로 위치 변경( 123이라면 1과 3의 위치를 변경 => 321 )
// 문제 조건에 3자리수로 고정되어 있기에 가능하다.
void swap(string &ref_num1, string &ref_num2){ 
  string temp = ref_num1;
  ref_num1 = ref_num2;
  ref_num2 = temp;
}

// 거꾸로된 숫자를 비교하여 큰 값을 반환 (문자열로 반환)
string max_numbers(string numbers[]){
  for (int i=0; i<2; i++)
    swap(numbers[i][0], numbers[i][2]);
  
  if (stoi(numbers[0]) > stoi(numbers[1]) )
    return numbers[0];
  else
    return numbers[1];

}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  std::string numbers[2];

  for (int i=0; i<2; i++)
    cin >> numbers[i];
  
  string max = max_numbers(numbers);
  cout << max;

  return 0;
}