#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    
    if (r==0)
        answer += code[0];
    
    for (int i=1; i<code.size(); ++i)
    {
        if (i%q == r)
            answer += code[i];
    }
    
    return answer;
}