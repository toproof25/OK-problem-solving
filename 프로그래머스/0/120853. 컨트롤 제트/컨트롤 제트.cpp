#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<int> numbers;
    
    int number = 0;
    int back_number = 0;
    bool plus = true;
    for (int i=0; i<s.size(); ++i) 
    {
        if ('0' <= s[i] && s[i] <= '9') 
        {   
            int n = s[i]-48;
            
            if ('0' <= s[i+1] && s[i+1] <= '9' )
            {
                number = number*10 + n;
            }
            else
            {
                number = number*10 + n;
                if (!plus) number = -number;
                numbers.push_back(number);
                number = 0;
                plus = true;
            }
        }
        else if (s[i] == 'Z')
            numbers.pop_back();
        else if (s[i] == '-')
            plus = false;
    }
    
    for (int i : numbers)
        answer += i;
    
    return answer;
}