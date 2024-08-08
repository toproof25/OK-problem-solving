#include <string>
#include <vector>
#include <iostream>

using namespace std;

static const vector<string> number_in_english = {
  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

long long solution(string numbers) {
    
    long long answer = 0;
    
    string num_str = "";
    for (char c : numbers) 
    {
        // numbers를 순회하며 각 문자를 더한다
        num_str += c;
        
        // 단어의 최소 길이 3 - 더한 문자의 길이가 3 이상이면 숫자를 체크한다
        if (num_str.size() >= 3) 
        {
            // 선언된 number_in_english 배열을 순회하며 num_str과 같은 index값을 찾는다
            for (int i=0; i<number_in_english.size(); ++i) {
                
                // 같은 문자열이 있다면 answer에 수를 추가한 후 num_str을 빈값으로 만든다
                if (number_in_english[i] == num_str) {
                    answer = answer*10 + i;
                    num_str.clear();
                    break;
                }
            }
        }
        
    }
    
    return answer;
}