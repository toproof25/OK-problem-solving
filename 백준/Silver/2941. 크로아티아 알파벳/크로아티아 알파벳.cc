#include <iostream>
using namespace std;

int main(){
  string word;
  cin >> word;

  int count = 0;
  int repeat = word.size();

  for (int i=0; i < repeat; i++){  
    if (i == repeat-1){
      count++;
      break;
    }

    if ( word[i] == 'c' && (word[i+1] == '=' || word[i+1] == '-') ){
      count++; 
      i++;
    }
    else if ( word[i] == 'd' && word[i+1] == '-'){
      count++;
      i++;
    }
    else if ( word[i] == 'l' && word[i+1] == 'j'){
      count++;
      i++;
    }
    else if ( word[i] == 'n' && word[i+1] == 'j'){
      count++;
      i++;
    }
    else if ( word[i] == 's' && word[i+1] == '='){
      count++;
      i++;
    }
    else if ( word[i] == 'z' && word[i+1] == '='){
      count++;
      i++;
    }
    else if (i<repeat-2 && word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=' ){
      count++;
      i+=2;
    }
    else
      count++;

  }

  cout << count;
  
  return 0;
}