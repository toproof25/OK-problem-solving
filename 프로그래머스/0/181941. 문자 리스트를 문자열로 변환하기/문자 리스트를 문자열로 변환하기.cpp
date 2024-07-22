#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    
    for(vector<string>::iterator iter = arr.begin(); iter != arr.end(); iter++)
    {
        answer += *iter;
    }
    
    return answer;
}