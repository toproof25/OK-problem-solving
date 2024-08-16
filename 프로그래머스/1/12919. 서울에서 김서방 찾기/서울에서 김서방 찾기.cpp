#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (int idx=0; idx<seoul.size(); ++idx){
        if (seoul[idx].length() == 3 && seoul[idx] == "Kim") {
            answer = "김서방은 " + to_string(idx) +"에 있다";
            break;
        }
    }
    
    return answer;
}