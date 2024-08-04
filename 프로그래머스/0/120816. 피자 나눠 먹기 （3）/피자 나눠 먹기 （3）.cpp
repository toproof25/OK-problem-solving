#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int answer = n/slice;
    
    if (answer*slice < n)
        answer = (n+slice)/slice;
    
    return answer;
}