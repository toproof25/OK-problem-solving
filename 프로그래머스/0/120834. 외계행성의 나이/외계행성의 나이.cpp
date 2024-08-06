#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    while (age != 0) {
        answer += (age%10 + 'a');
        age /= 10;
    }
    
    int size = answer.size()-1;
    for (int i=0; i<(size+1)/2; ++i) {
        char temp = answer[i];
        answer[i] = answer[size-i];
        answer[size-i] = temp;
    }
    
    return answer;
}