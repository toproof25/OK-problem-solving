#include <iostream>
using namespace std;

int main()
{
  // 널문자로 초기화
  char words[5][16] = {'\0', };

  // 문자열을 입력
  for (int row = 0; row < 5; row++)
    cin.getline(words[row], 16, '\n');


  for (int col = 0; col < 16; col++) 
  {
    for (int row = 0; row < 5; row++)
    {
        char word = words[row][col];

        // 특정 문자만 출력
        if ('0' <= word && word <= '9')
          cout << word;
        else if ('A' <= word && word <= 'Z')
          cout << word;
        else if ('a' <= word && word <= 'z')
          cout << word;
    }
  }

  return 0;
} 
