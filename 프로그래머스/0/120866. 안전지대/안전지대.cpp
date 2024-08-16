#include <string>
#include <vector>
#include <iostream>
using namespace std;

void unsafe_zone (vector<vector<int>> &board, int row, int col, int &count) {
    
    // 행 범위 설정
    int min_row = row-1 >= 0 ? row-1 : 0;
    int max_row = row+1 < board.size() ? row+1 : board.size()-1;
   
    // 열 범위 설정
    int min_col = col-1 >= 0 ? col-1 : 0;
    int max_col = col+1 < board.size() ? col+1 : board.size()-1;    
    
    // 범위 내 요소를 위험지역으로 만듦
    for (int r = min_row; r<=max_row; ++r)
    {
        for (int c = min_col; c<=max_col; ++c)
        {
            // 위험지역으로 분류함과 동시에 위험지역의 수를 카운트
            if (board[r][c] == 0) {
                ++count;
                board[r][c] = 2;
            }
        }
    }
    
}

int solution(vector<vector<int>> board) {
    int answer = board.size() * board.size();
    int count = 0;
    
    for (int row=0; row<board.size(); ++row)
    {
        for (int col=0; col<board[row].size(); ++col)
        {
            if (board[row][col] == 1) // 지뢰지역
                unsafe_zone(board, row, col, ++count);
        }
    }

    answer -= count;
    return answer;
}