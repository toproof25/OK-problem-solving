#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    int size = start_num-end_num+1;
    vector<int> answer(size);
    
    for (int i=0; i<size; ++i)
        answer[i] = start_num - i;
        
    return answer;
}