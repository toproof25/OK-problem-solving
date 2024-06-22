#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  for (int n=0; n < number; n++){
    int repeat;
    std::string word;
    cin >> repeat >> word;

    for (int i = 0; i < word.length(); i++)
      for (int j=0; j<repeat; j++)
        cout << word[i];
    cout << '\n';
  }

  return 0;
}