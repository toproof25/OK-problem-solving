#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    int size = num_list.size()-n+1;
    vector<int> answer(size, 0);
    
    for (int i=0; i<size; ++i)
    {
        answer[i] = num_list[i+n-1];
    }
    
    return answer;
}