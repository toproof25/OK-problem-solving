#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    
    int idx=0;
    while (message[idx++] != '\0')
        ++answer;
    answer *= 2;
    
    // size, length 사용
    //answer = message.size() * 2;
    
    return answer;
}