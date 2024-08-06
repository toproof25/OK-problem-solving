#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    int remainder;
    while (order != 0) {
        remainder = order%10;
        order /= 10;
        if (remainder%3==0 && remainder!=0)
            ++answer;
    }
    
    return answer;
}