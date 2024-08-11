#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    int& x = answer[0];
    int& y = answer[1];
    
    int max_x = (board[0]/2), min_x = -(board[0]/2);
    int max_y = (board[1]/2), min_y = -(board[1]/2);
    
    // 키입력에 따라 x, y값 변경
    for (string key : keyinput) {
        if (key == "left" && x > min_x) 
            --x;
        else if (key == "right" && x < max_x) 
            ++x;
        else if (key == "up"  && y < max_y) 
            ++y;
        else if (key == "down"  && y > min_y) 
            --y;
    }

    return answer;
}