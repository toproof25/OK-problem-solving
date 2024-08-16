#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    bool negative = false;
    for (const char &c : s)
    {
        if (c == '-') 
            negative = true;
        else if (c == '+')
            negative = false;
        else
            answer = answer * 10 + (c-'0');
    }
    
    return negative ? -answer : answer;
}