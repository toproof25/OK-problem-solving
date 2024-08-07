#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    for (int i=0; i<num_list.size(); i+=n) 
    {
        vector<int> v(n);
        for (int j=i; j < i+n; ++j) 
        {
            v[j-i] = num_list[j];
        }
        answer.push_back(v);
    }
    
    return answer;
}