#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long count;
    
    if (a >= 0 && b >= 0)
        count = max(a, b) - min(a, b) + 1;
    else if ( (a < 0 && b >= 0) || (a >= 0 && b < 0) )
        count = abs(a) + abs(b) + 1;
    else
        count = -min(a, b) + max(a, b) + 1;
    
    answer = count * (a+b) / 2;
    
    return answer;
}