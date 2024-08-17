#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int sum = 0, number = x;
    while (number != 0)
    {
        sum += number%10;
        number /= 10;
    }
    
    if (x%sum != 0)
        answer = false;
    
    return answer;
}