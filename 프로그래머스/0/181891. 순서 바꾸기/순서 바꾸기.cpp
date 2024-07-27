#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    int size = num_list.size();
    vector<int> answer(size, 0);
    
    for (int i=n; i<size; ++i)
    {
        answer[i-n] = num_list[i];
    }
    
    for (int i=0; i<n; ++i)
    {
        answer[size-n+i] = num_list[i];
    }
    
    return answer;
}