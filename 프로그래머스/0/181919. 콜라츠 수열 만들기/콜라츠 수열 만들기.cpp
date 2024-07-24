#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer = {n};
    
    int collatz = n;
    while (collatz != 1)
    {
        if (collatz&1)
            collatz = 3 * collatz + 1;
        else
            collatz /= 2;
        
        answer.push_back(collatz);
    }
    
    return answer;
}