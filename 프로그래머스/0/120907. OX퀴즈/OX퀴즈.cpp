#include <string>
#include <vector>
#include <iostream>

using namespace std;

int get_number (const string &str, int &idx) {
    int number = 0;
    bool negative = false;
    
    while (str[idx] != ' ' && str[idx] != '\0')
    {
        if (str[idx] == '-'){
            negative = true;
        }
        else if ('0' <= str[idx] && str[idx] <= '9') {
            number = number * 10 + (str[idx]-48);
        }
        
        ++idx;
    }
    
    if (negative)
        return -number;
    else
        return number;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    answer.reserve(quiz.size());
    
    for (auto str : quiz) 
    {
        int idx = 0;
        
        int number1 = get_number(str, idx);
        char add = str[++idx];
        int number2 = get_number(str, (idx+=2));
        int number3 = get_number(str, (idx+=3));
        
        int result = add == '+' ? number1+number2 : number1-number2;
        if (result == number3)
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    
    return answer;
}