#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  std::string word;
  cin >> word;

  for (int alpha='a'; alpha <= 'z'; alpha++){
    short isAlpha = -1;
    for (int i = 0; i < word.length(); i++)
    {
      if (alpha == word[i]){
        isAlpha = i;
        break;
      }
    }
    cout << isAlpha << ' ';
  }

  return 0;
}