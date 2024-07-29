#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string str = "";
    for (int i=0; i<myStr.size(); ++i) {
        if (myStr[i] > 'c') {
            str += myStr[i];
            if (i==myStr.size()-1)
                answer.push_back(str);
        }
        else if ('a' <= myStr[i] && myStr[i] <= 'c' && !str.empty()) {
            answer.push_back(str);
            str.clear();
        }
    }
    
    if (answer.empty())
        return {"EMPTY"};
    return answer;
}