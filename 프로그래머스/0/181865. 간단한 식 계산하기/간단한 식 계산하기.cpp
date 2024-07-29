#include <string>
#include <vector>

using namespace std;

int string_to_int(string &str, int start, int end) {
    int number = 0;
    for (; start<=end; ++start) {
        number += (str[start] - '0');
        number *= 10;
    }
    return number / 10;
}


int solution(string binomial) {
    int answer = 0;
    
    int first_num = 0;
    int second_num = 0;
    char op;
    
    int mid_index = 0;
    int size = binomial.size();
    for (int i=0; i < size; ++i) {
        if (binomial[i] == ' ') {
            first_num = string_to_int(binomial, 0, i-1);
            op = binomial[i+1];
            mid_index = i+3;
            break;
        }
    }
    
    second_num = string_to_int(binomial, mid_index, size-1);

    switch(op) {
        case '+':
            answer = first_num + second_num;
            break;
        case '-':
            answer = first_num - second_num;
            break;
        case '*':
            answer = first_num * second_num;
            break;
    }
    
    return answer;
}