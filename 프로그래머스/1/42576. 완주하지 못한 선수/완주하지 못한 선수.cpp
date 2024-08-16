#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string, int> name;
    
    for (const string &part : participant)
    {
        name[part]++;
    }
    
    for (const string &comp : completion)
    {
        name[comp]--;
    }
    
    for (const pair<string, int> &m : name)
    {
        if (m.second >= 1){
            answer = m.first;
            break;
        }
    }
    
    return answer;
}