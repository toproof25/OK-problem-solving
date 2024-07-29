#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int start_idx = 0;
    int end_idx = 0;
    
    // push할 시작 위치, 마지막 위치를 구함
    for (int i=0; i<str_list.size(); ++i) {
        if (str_list[i] == "l") {
            start_idx = 0;
            end_idx = i;
            break;
        }
        else if (str_list[i] == "r") {
            start_idx = i+1;
            end_idx = str_list.size();
            break;
        }
    }

    // l or r에 따라서 요소들을 push
    for (int i=start_idx; i<end_idx; ++i)
        answer.push_back(str_list[i]);
    
    return answer;
}