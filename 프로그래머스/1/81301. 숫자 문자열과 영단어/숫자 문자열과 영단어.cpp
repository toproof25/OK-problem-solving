#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0, i = 0;
    
    int length[10] = {4, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    map<string, int> m = { {"ze", 0}, {"on", 1}, {"tw", 2}, {"th", 3}, {"fo", 4}, {"fi", 5}, {"si", 6}, {"se", 7}, {"ei", 8}, {"ni", 9} };
    map<string, int>::iterator iter;
    
    string number = "";
    while(i < s.size())
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            answer = answer * 10 + (s[i++]-'0');
        }
        else if (number.size() == 2)
        {
            iter = m.find(number);
            int num = iter->second;
            answer = answer * 10 + num;
            i += length[num] - 2;
            number.clear();
        }
        else
        {
            number += s[i++];
        }
    }
    
    return answer;
}