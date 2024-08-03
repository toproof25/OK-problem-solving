#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    // 벡터 크기 설정
    answer.reserve(n);
    for (int i=0; i<n; ++i) {
        vector<int> arr(n, 0);
        answer.emplace_back(arr);
    }
    
    int number = 1;
    int maximum = n*n;
    
    int row=0;
    int col=0;
    int mode = 1;
    
    while (number <= maximum) {
        
        // right col
        if (mode==1) {
            for ( ; col < n && answer[row][col]==0; ++col) 
                answer[row][col] = number++;
            --col;
            ++row;
        }
        // down row
        else if (mode==2) {
            for ( ; row < n && answer[row][col]==0; ++row) 
                answer[row][col] = number++;
            --row;
            --col;
        }
        // left col
        else if (mode==3) {
            for ( ; col >= 0 && answer[row][col]==0; --col) 
                answer[row][col] = number++;
            ++col;
            --row;
        }
        // up row
        else if (mode==4) {
            for ( ; row >= 0 && answer[row][col]==0; --row) 
                answer[row][col] = number++;
            ++row;
            ++col;
        }
        
        mode = mode == 4 ? 1 : mode+1;
    }
    
    return answer;
}