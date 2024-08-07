#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int idx = 2;
    while (n != 1)
    {
        if (n%idx==0) {
            bool check = true;
            for (int i : answer) {
                if (i == idx) {
                    check = false;
                    break;
                }
            }
            if (check)
                answer.push_back(idx);
            n /= idx;
        }
        else {
            ++idx;
        }
    }
    
    
    
    return answer;
}