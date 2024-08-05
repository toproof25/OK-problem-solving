#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for (int i=0; i<my_string.size(); ++i) {
        if (my_string[i] != letter[0])
            answer += my_string[i];
    }
    
    return answer;
    
    
//string find, erase 함수 사용
    
//     string answer(my_string);
//     while (answer.find(letter[0]) != std::string::npos) {
//         int idx = answer.find(letter[0]);
//         answer.erase(idx, 1);
//     }
    
}