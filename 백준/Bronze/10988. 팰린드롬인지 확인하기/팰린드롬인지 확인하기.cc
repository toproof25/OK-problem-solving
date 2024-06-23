#include <iostream>
using namespace std;

bool check_palindrome(string word){

  int size = word.size();

  for (int i=0; i < size/2; i++){
    if (word[i] != word[size-i-1])
      return false;
  }
  
  return true;
}


int main(){
  string word;
  cin >> word;

  if (check_palindrome(word))
    cout << 1;
  else
    cout << 0;
  

  return 0;
}