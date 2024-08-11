#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int max_idx = 0, min_idx = 0;
    for (int i=0; i<dots.size(); ++i) {
        int sum = dots[i][0] + dots[i][1];
        if (sum > dots[max_idx][0] + dots[max_idx][1]) max_idx = i;
        else if (sum < dots[min_idx][0] + dots[min_idx][1]) min_idx = i;  
    }
    
    dots[max_idx][0] += -dots[min_idx][0];
    dots[min_idx][0] += -dots[min_idx][0];
    
    dots[max_idx][1] += -dots[min_idx][1];
    dots[min_idx][1] += -dots[min_idx][1];
    
    int x = dots[max_idx][0]-dots[min_idx][0];
    int y = dots[max_idx][1]-dots[min_idx][1];
    answer = x*y;
    
    return answer;
}