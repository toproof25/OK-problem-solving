#include <iostream>
using namespace std;


bool isIncludesChar(char c, char array[]){
  for (int i=0; array[i]!='\0'; i++)
    if (array[i] == c) 
      return true;
  return false;
}

bool cheakGroupword(string word){
  bool tf = true;
  char *char_array = new char[word.length()+1];
  char_array[0] = word[0];

  for (int i=1; i<word.length(); i++)
    char_array[i] = '\0';

  // i는 word 문자열을 순서대로 진행, index는 char_array의 입력되는 순서
  for (int i=1, index=1; i<word.length(); i++){
    char c = word[i];

    if (c == word[i-1])// c가 이전 문자와 같을 경우
      continue;
    else if (isIncludesChar(c, char_array)){ // 이미 나타난 문자이나, 연속된 문자가 아닌 경우)
      tf = false;
      break;
    }
    else
      char_array[index++] = c; 
  }

  delete[] char_array;
  return tf;
}


int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  std::string *word = new string[number];
  for(int i=0; i<number; i++)
    cin >> word[i];

  int count = 0;
  for(int i=0; i<number; i++)
    if( cheakGroupword(word[i]) )
      count++;

  delete[] word;
  cout << count;

  return 0;

}