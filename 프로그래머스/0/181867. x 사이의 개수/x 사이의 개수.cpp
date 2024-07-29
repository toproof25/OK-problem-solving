#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    int start_idx = 0;
    for (int i=0; i<=myString.size(); ++i) {
        if (myString[i] == 'x' || i == myString.size()) {
            answer.push_back(i-start_idx);
            start_idx = i+1;
        }
    }
    
    
    return answer;
}