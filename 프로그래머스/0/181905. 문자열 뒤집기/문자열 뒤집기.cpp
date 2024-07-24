#include <string>
#include <vector>

using namespace std;

void char_swap(char &c1, char &c2){
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

string solution(string my_string, int s, int e) {
    string answer(my_string);
    
    for (int i=0; i<=(e-s)/2; ++i)
        char_swap(answer[s+i], answer[e-i]);

    return answer;
}