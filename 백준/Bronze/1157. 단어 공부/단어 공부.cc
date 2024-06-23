#include <iostream>
#include <map>
using namespace std;

// 딕셔너리 m에서 value가 가장 큰 문자 or 중복 여부를 반환
char max_char(map<char, int> m){

  int max = 0;
  char max_char;
  bool isDouble = false;

  // 딕셔너리 map을 처음부터 끝가지 반복
  for (auto i=m.begin(); i != m.end(); i++){

    if (max == i->second){ // max가 중복되었다면
      isDouble = true;
    }
    else if (max < i->second){ // max값 설정
      max = i->second;
      max_char = i->first;
      isDouble = false;
    }
  }

  if (isDouble) // max가 중복되었다면 ? 반환
    return '?';
  return max_char;

}

// 소문자 -> 대문자 만들기
void char_upper(char &alpha){
  if (alpha >= 'a' && alpha <= 'z')
     alpha -= 32;
}

// 문자열에서 최다 문자를 반환
char getMostChar(string word){
  map<char, int> m;

  for (int i=0; i < word.size(); i++){
    char_upper(word[i]);

    if (m.find(word[i]) == m.end())
      m[word[i]] = 1;
    else
      m[word[i]]++;
  }
  
  return max_char(m);
}


int main(){
  string word;
  cin >> word;
  cout << getMostChar(word);
  return 0;
}