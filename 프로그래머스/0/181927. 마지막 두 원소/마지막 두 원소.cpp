#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    vector<int> answer(num_list);
    
    int number = *(num_list.end()-2);
    int last = num_list.back();
    
    if (number >= last)
        answer.push_back(last*2);
    else
        answer.push_back(last - number);
    
    return answer;
}
