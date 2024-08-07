#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min_num = 1000;
    for (int i=0; i<array.size(); ++i) {
        if (min_num == std::abs(n-array[i]) && answer > array[i])
        {
            answer = array[i];
        }
        else if (min_num > std::abs(n-array[i]))
        {
            min_num = std::abs(n-array[i]);
            answer = array[i];    
        }
    }
    
    return answer;
}