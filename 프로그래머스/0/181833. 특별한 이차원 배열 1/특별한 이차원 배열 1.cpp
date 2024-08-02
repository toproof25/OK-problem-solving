#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    answer.reserve(n);
    
    for (int row=0; row<n; ++row) {
        vector<int> arr(n, 0);
        arr[row] = 1;
        answer.push_back(arr);
    }
    
    return answer;
}