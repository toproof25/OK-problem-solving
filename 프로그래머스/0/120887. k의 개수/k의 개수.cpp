#include <string>
#include <vector>

using namespace std;

int count_number(int number, int k) {
    
    int count = 0;
    
    while (number != 0)
    {
        if (number % 10 == k) ++count;
        number /= 10;
    }
    
    return count;
    
}

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (; i<=j; ++i)
        answer += count_number(i, k);
    
    return answer;
}