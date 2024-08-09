#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    for (vector<string> v : db)
    {
        if (id_pw[0] == v[0] && id_pw[1] == v[1]) {
            answer = "login";
            break;
        }
        else if (id_pw[0] == v[0] && id_pw[1] != v[1]) {
            answer = "wrong pw";
        }
    }
    
    return answer;
}