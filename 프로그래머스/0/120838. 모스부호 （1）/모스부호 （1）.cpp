#include <string>
#include <vector>

using namespace std;

static const vector<string> MorseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    

char get_MorseCode(int start_idx, string& str) {
    
    int idx = start_idx;
    string morse = "";

    while (str[idx] != ' ' && idx < str.size()) {
        morse += str[idx++];
    }
    
    for (int i=0; i<MorseCode.size(); ++i) {
        if (morse == MorseCode[i])
            return i + 'a';
    }
    return '\0';
    
}


string solution(string letter) {
    string answer = "";
    int start = 0;
    int size = letter.size();
    
    for (int i=0; i<=size; ++i) {
        if (letter[i] == ' ' || i == size-1){
            answer += get_MorseCode(start, letter);
            start = i+1;
        }
    }
    
    return answer;
}