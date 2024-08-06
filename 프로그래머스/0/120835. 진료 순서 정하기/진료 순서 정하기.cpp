#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    
    
    int repeat = emergency.size();
    vector<int> answer(repeat);
    
    for (int i=0; i<repeat; ++i) {
        
        int max_idx = i;
        for (int j=0; j<repeat; ++j) {
            if (emergency[max_idx] < emergency[j])
                max_idx = j;
        }
        answer[max_idx] = i+1;
        emergency[max_idx] = 0;
    }
    
    return answer;
}