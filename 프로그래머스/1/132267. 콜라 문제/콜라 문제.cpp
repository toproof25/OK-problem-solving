#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        int b_count = n/a * b;
        int a_count = a * (n/a);
        
        answer += b_count;
        n = n - a_count + b_count;
    }
    
    return answer;
}