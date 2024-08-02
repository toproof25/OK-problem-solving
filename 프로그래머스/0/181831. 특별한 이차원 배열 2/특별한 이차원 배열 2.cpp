#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    
    int n=arr.size();
    bool check = true;
    
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            if (arr[i][j] != arr[j][i]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }
    
    if (check) return 1;
    else return 0;
}