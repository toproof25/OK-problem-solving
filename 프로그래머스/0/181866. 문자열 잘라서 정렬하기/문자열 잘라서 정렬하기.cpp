#include <string>
#include <vector>

using namespace std;


void string_swap(string &str1, string &str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

void seletion_sort(std::vector<string> &v) {
    for (int i=0; i<v.size()-1; ++i) {
        int min_str = i;    
        for (int j=i+1; j<v.size(); ++j) {
            if (v[min_str] > v[j])
                min_str = j;
        }
        string_swap(v[min_str], v[i]);
    }
}

vector<string> solution(string myString) {
    vector<string> answer;
    
    string str = "";
    for (int i=0; i<myString.size(); ++i) {
        if (myString[i] == 'x' && !str.empty()) {
            answer.push_back(str);
            str.clear();
        }
        else if (myString[i] != 'x' && i==myString.size()-1) {
            str += myString[i];
            answer.push_back(str);
        }
        else if (myString[i] != 'x') {
            str += myString[i];
        }
    }
    
    if (!answer.empty())
        seletion_sort(answer);
    
    return answer;
}