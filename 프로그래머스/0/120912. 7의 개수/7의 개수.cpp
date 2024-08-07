#include <string>
#include <vector>

using namespace std;

int count_number(int number) {
    int count = 0;
    while (number != 0)
    {
        if (number % 10 ==7) ++count;
        number /= 10;
    }
    return count;
}

int solution(vector<int> array) {
    int answer = 0;
    
    for (int i : array)
        answer += count_number(i);
    
    return answer;
}