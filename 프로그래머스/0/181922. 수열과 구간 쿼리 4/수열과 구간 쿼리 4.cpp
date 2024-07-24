#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer(arr);
    
    for (int i=0; i<queries.size(); ++i)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
           
        for (; s <= e ; ++s)
            if (s % k == 0)
                ++answer[s];
    }
    
    
    return answer;
}

