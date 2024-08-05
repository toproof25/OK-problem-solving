#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2);
    
    
    int max_num = 0;
    for (int i=1; i<array.size(); ++i) {
        if (array[max_num] < array[i])
            max_num = i;
    }
    
    answer[0] = array[max_num];
    answer[1] = max_num;
    return answer;
}