#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    
    // 문자열 길이 측정
    int size=1;
    for (int i=1; i<food.size(); ++i) 
        size += (food[i]/2)*2;
    
    // 각 문자 설정
    string answer(size, '0');
    for (int i=1, j=0; i<food.size(); ++i) {
        for (int k=0; k<food[i]/2; ++k, ++j) {
            answer[j] = i+'0';
            answer[size-j-1] = i+'0';
        }
    }
    
    return answer;
}