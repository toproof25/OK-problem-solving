#include <iostream>
#include <string>
using namespace std;


// 다이얼의 문자 범위는 정해져 있다
int sum_time(string str){
  int time = 0;

  for (int i=0; i<str.size(); i++){
    char s = str[i];
    if (s <= 'C')
      time += 3;
    else if (s <= 'F')
      time += 4;
    else if (s <= 'I')
      time += 5;
    else if (s <= 'L')
      time += 6;
    else if (s <= 'O')
      time += 7;
    else if (s <= 'S')
      time += 8;
    else if (s <= 'V')
      time += 9;
    else if (s <= 'Z')
      time += 10;
  }

  return time;
}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  std::string numbers;
  cin >> numbers;
  
  int time = sum_time(numbers);
  cout << time;

  return 0;
}