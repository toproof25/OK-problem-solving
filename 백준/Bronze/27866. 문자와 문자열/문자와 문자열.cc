#include <iostream>
#include <string>

using namespace std;

// 구조체 연습으로 풀이
struct CharString
{
  std::string word;
  int number;
};

char func(CharString *cs){
  cin >> cs->word;
  cin >> cs->number;
  return cs->word[(cs->number) - 1];
}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  CharString cs;
  char c = func(&cs);
  cout << c;

  return 0;
}