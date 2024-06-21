/* eslint-disable */

#include <iostream>
#include <string>

using namespace std;

int func(char _char_word[]){
  for (int i=0; i<101; i++){
    if (_char_word[i] == '\0')
      return i;
  }
}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  // string을 사용하여 풀이
  //std::string word;
  //cin >> word;
  //cout << word.length() << '\n';

  // char 배열을 사용하여 풀이
  char *char_word = new char[101];
  cin >> char_word;
  int length = func(char_word);
  cout << length;
  delete[] char_word;

  return 0;
}