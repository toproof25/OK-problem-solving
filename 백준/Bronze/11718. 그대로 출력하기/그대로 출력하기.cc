#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  std::string word;

  while( std::getline(cin, word) ){
    cout << word << '\n';
  }

  return 0;
}