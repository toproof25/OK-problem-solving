#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    int min_num = min(lines[0][0], min(lines[1][0], lines[2][0]));
    int max_num = max(lines[0][1], max(lines[1][1], lines[2][1]));
    
    for (int i=min_num; i<max_num; ++i) {
        if ( (i >= lines[0][0] && i+1 <= lines[0][1]) && (i >= lines[1][0] && i+1 <= lines[1][1]) )
            ++answer;
        else if ( (i >= lines[0][0] && i+1 <= lines[0][1]) && (i >= lines[2][0] && i+1 <= lines[2][1]) )
            ++answer;
        else if ( (i >= lines[1][0] && i+1 <= lines[1][1]) && (i >= lines[2][0] && i+1 <= lines[2][1]) )
            ++answer;
    }
        
    
    return answer;
}