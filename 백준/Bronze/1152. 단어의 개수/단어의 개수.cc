#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  std::string sentence;
  std::getline(cin, sentence); // cin은 공백 이전까지 입력받지만, getline은 한 문장을 입력받는다(\n까지)

  if (sentence.length() == 1 && sentence[0] == ' '){
    cout << 0;
  }
  else{
    int word_count = 0; 

    for (int i = 1; i < sentence.length()-1; i++) // 문장길이가 2 이상이면 1부터 n-1 까지만 공백 검사
      if (sentence[i] == ' ')
        word_count++;
    
    cout << ++word_count; // 문장길이가 2 이상이면 최소 1개의 단어가 존재한다
  }


  return 0;
}