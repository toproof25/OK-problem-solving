#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer(my_string);
    
    for (int i=0; i < answer.size(); ++i){
        if (answer[i] >= 97)
            answer[i] &= '_';
        else
            answer[i] |= ' ';
    }
    
    return answer;
}