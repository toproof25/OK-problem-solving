#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    
    // before의 각 알파벳 개수와, after의 각 알파벳 개수가 맞으면 가능
    int before_array[26] = {0, };
    int after_array[26] = {0, };
    
    for (int i=0; i<before.size(); ++i){
        int b_idx = before[i] - 'a';
        int a_idx = after[i] - 'a';
        
        ++before_array[b_idx];
        ++after_array[a_idx];
    }
    
    for (int i=0; i<26; ++i) {
        if (before_array[i] != after_array[i]) {
            answer = 0;
            break;
        }
    }
    
    return answer;
}