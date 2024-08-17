#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    double sqrt_n = std::sqrt(n);
    
    if (sqrt_n - (int)sqrt_n > 0)
        answer = -1;
    else
        answer = ++sqrt_n * sqrt_n;
    
    return answer;
}