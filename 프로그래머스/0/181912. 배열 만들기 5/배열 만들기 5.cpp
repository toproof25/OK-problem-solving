#include <string>
#include <vector>

using namespace std;


string substr_string(string &str, int s, int l){
    string number = "";
    number.reserve(l);
    
    for (int idx=s; idx < s+l; ++idx)
        number += str[idx];
    return number;
}

int string_to_int(string &str){
    int number = 0;
    for (int idx=0; idx<str.size(); ++idx)
    {
        number += (str[idx] - '0');
        number *= 10;
    }
    return number / 10;
}


vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (int i=0; i<intStrs.size(); ++i)
    {
        // string str = intStrs[i].substr(s, l); // substr함수 사용
        // int strToInt = std::stoi(str); // stoi함수 사용
        
        string str = substr_string(intStrs[i], s, l); // substr 직접 만들어보기
        int strToInt = string_to_int(str); // stoi 직접 만들어보기
        
        if (strToInt > k)
            answer.push_back(strToInt);
        
    }
    
    return answer;
}