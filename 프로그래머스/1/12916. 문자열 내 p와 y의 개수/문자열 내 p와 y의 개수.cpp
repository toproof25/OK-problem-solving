#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer;
    
    int p=0, y=0;
    for (const char &c : s)
    {
        if (c == 'p' || c == 'P')
            ++p;
        else if (c == 'y' || c == 'Y')
            ++y;
    }
    
    answer = p==y ? true : false;
    
    return answer;
}