#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count_x = 0, count_not_x = 0;
    char x = s[0];
    
    for (int i=0; i<s.size()-1; ++i)
    {
        if (x == s[i])
            count_x++;
        else
            count_not_x++;
        
        if (count_x == count_not_x) {
            count_x = 0;
            count_not_x = 0;
            x = s[i+1];
            answer++;
        }  
    }
    
    return ++answer;
}