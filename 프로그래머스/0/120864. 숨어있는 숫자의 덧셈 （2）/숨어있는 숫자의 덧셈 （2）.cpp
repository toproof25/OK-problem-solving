#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    int number = 0;
    for (int i=0; i<my_string.size(); ++i) 
    {
        if ('0' <= my_string[i] && my_string[i] <= '9') 
        {
            int n = my_string[i]-48;
            if ('0' <= my_string[i+1] && my_string[i+1] <= '9' )
            {
                number = number*10 + n;
            }
            else
            {
                answer += (number*10 + n);
                number = 0;
            }
        }
    }
    
    return answer;
}