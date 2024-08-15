#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    int max_leg = std::max(sides[0], sides[1]);
    int min_leg = std::min(sides[0], sides[1]);
    
    for (int i=1+max_leg-min_leg; i<=max_leg; ++i) {
        ++answer;
    }
    for (int i=1+max_leg; i<max_leg+min_leg; ++i) {
        ++answer;
    }
    
    return answer;
}