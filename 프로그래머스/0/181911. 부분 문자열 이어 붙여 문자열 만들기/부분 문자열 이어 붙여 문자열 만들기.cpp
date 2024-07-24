#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
     
    for (int idx=0; idx<my_strings.size(); ++idx)
    {
        string str = my_strings[idx];
        int start = parts[idx][0];
        int end = parts[idx][1];
        
        for (; start <= end; ++start)
            answer += str[start];
    }
    
    return answer;
}