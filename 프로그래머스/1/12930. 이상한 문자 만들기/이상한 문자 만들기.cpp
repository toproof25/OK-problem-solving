#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int start_idx = 0;
    for (int i=0; i<s.size(); ++i)
    {
        if (s[i] == ' ')
            start_idx = i+1;
        
        if ((i-start_idx)&1)
            s[i] |= ' ';
        else
            s[i] &= '_';
    }
    
    return s;
}