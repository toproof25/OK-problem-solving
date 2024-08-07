#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int alpha[26] = {0,};
    for (char c : s) 
        ++alpha[c-'a'];
    
    for (int i=0; i<26; ++i)
        if (alpha[i]==1)
            answer += (i+'a');
    
    return answer;
}