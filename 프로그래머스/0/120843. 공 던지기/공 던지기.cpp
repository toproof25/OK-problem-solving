#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    
    int size = numbers.size();
    int idx = 0;
    while (k-- > 1) {
        idx += 2;
        if (idx >= size)
            idx = idx - size;
    }
    
    answer = numbers[idx];
    
    return answer;
}