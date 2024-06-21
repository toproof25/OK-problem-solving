#include <iostream>
#include <string>

using namespace std;

void func(int number){
  for (int i=0; i<number; i++){
    // string을 사용하여 풀이
    std::string word;
    cin >> word;
    cout << word[0];
    cout << word[word.length()-1] << '\n';
  }
}

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;
  func(number);

  return 0;
}