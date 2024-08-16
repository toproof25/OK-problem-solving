#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(), 0);
    
    for (int i=0; i<score.size(); ++i)
        answer[i] = score[i][0] + score[i][1] + 100;
    
    int pre_score = -1, pre_ranking = -1;
    int ranking = 1;
    for (int i=1; i<=answer.size(); ++i, ++ranking) {
        int max_idx = 0;
        for (int j=1; j<answer.size(); ++j)
        {
            if (answer[max_idx] < answer[j])
                max_idx = j;
        }
        
        if (answer[max_idx] == pre_score) {
            answer[max_idx] = pre_ranking;
        }
        else {
            pre_score = answer[max_idx];
            pre_ranking = ranking;
            answer[max_idx] = ranking;
        }
        
    }
    
    return answer;
}