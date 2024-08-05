#include <string>
#include <vector>

using namespace std;

void char_swap(char& c1, char& c2) {
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

string solution(string my_string) {
    string answer(my_string);
    
    int size = answer.size()-1;
    for (int i=0; i<(size+1)/2; ++i) 
        char_swap(answer[i], answer[size-i]);
    
    
    return answer;
}