#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers.size());
    
    if (direction == "right") {
        answer[0] = numbers.back();
        for (int i=0; i<numbers.size()-1; ++i) {
            answer[i+1] = numbers[i];
        }
    }
    else {
        vector<int>::iterator iter = answer.end()-1;
        *iter = numbers.front();
        for (int i=0; i<numbers.size()-1; ++i) {
            answer[i] = numbers[i+1];
        }
    }
    
    return answer;
}