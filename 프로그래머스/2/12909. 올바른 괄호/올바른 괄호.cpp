#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    if (s.empty()) return true;
    if (s[0]&1) return false;
    
    stack<char> stk;
    stk.push(1); ///< 빈값 방지 더미 데이터
    stk.push(s[0]&1); ///<'('이라면 0이 삽입됨, `)`이라면 1이 삽입됨
    
    int size = s.size();
    for (int i=1; i<size; ++i)
    {
        if ( (!stk.top()) && (s[i]&1) ) stk.pop();
        else stk.push(s[i]&1);
    }
    
    return stk.size()==1;
}