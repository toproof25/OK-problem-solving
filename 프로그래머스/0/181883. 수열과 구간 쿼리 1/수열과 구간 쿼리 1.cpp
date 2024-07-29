#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int i=0; i<queries.size(); ++i) {
        int start_idx = queries[i][0];
        int end_idx = queries[i][1];
        
        for ( ; start_idx <= end_idx; ++start_idx)
            ++arr[start_idx];
    }
    
    return arr;
}