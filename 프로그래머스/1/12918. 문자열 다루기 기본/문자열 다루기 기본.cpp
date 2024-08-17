#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.size()==4 || s.size()==6)
    {
        for (const char &c : s) {
            if (c > '9') {
                answer = false;
                break;
            }
        }
    }
    else
        answer = false;
        
    return answer;
}