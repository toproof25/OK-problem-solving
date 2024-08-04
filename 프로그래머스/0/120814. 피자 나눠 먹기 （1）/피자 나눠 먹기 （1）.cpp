#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n/7;
    
    if (answer*7 < n)
        answer = (n+7)/7;
    
    return answer;
}