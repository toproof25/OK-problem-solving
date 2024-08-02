#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {

    int row_size = arr.size();
    int col_size = arr[0].size();
    int max_size = std::max(row_size, col_size);
    
    for (int row=0; row<max_size; ++row) {
        
        if (row >= row_size) 
            arr.push_back({0});
            
        col_size = arr[row].size();
        for (int col=0; col<max_size; ++col) {
            if (col >= col_size) 
                arr[row].push_back(0);
        }
    }
    
    return arr;
}