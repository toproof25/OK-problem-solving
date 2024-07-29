#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    std::vector<string> answer;
    
    /*
    // vector iterator, string.find함수 이용
    for (std::vector<string>::iterator iter=strArr.begin(); iter!=strArr.end(); ++iter) {
        if ((*iter).find("ad") != string::npos)
            strArr.erase(iter);
    }
    */

    // 직접 구현하여 이용
    for (int i = 0; i < strArr.size(); ++i) {
        
        string &str = strArr[i];
        bool push_check = true;
        
        for (int s=0; s < str.size()-1; ++s)
            if (str[s] == 'a' && str[s+1] == 'd') {
                push_check = false;
                break;
            }
        
        if (push_check)
            answer.push_back(str);
    }
    
    return answer;
}