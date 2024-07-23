#include <string>
#include <vector>

using namespace std;

void upper_lower(string& str, int choise){
    if (choise == 0) // 대문자 -> 소문자
    {
        for (int i=0; i<str.size(); i++)
            str[i] |= ' ';
    }
    else // 소문자 -> 대문자
    {
        for (int i=0; i<str.size(); i++)
            str[i] &= '_';
    }
}


vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i=0; i<strArr.size(); i++)
    {
        upper_lower(strArr[i], i&1); // 1&1 == 짝수면 0, 홀수면 1
        answer.push_back(strArr[i]);
    }
    
    return answer;
}