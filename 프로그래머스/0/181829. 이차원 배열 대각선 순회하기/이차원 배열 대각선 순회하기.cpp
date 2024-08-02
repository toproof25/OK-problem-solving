#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    
    for (int i=0; i<board.size(); ++i) {
        for (int j=0; j<board[i].size() && i+j<=k; ++j) {
            answer += board[i][j];
        }
    }
    
    return answer;
}