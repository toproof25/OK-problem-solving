#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0, number = 0;
    char operation = '+';

    for (char &temp : my_string)
    {
        if (temp == '+' || temp == '-') {
            answer = operation=='+' ? answer+number : answer-number;
            operation = temp;
            number = 0;
        }
        else if (temp >= '0') {
            number = number * 10 + (temp-'0');
        }
    }
    answer = operation=='+' ? answer+number : answer-number;
    
    return answer;
}