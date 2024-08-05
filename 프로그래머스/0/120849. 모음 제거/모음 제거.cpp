#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int i=0; i<my_string.size(); ++i) {
        char mo = my_string[i];
        if (mo != 'a' && mo != 'e' && mo != 'i' && mo != 'o' && mo != 'u')
            answer += mo;
    }
    
    return answer;
}