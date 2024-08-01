#include <string>
#include <vector>
#include <iostream>

using namespace std;

void char_swap(char &c1, char &c2){
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

string solution(string a, string b) {
    
    // a문자열이 항상 더 큰값으로 설정
    if (a.size() < b.size())
        a.swap(b);

    int max_size = a.size();
    int min_size = b.size();
    
    string answer;
    answer.reserve(max_size+1);

    // 계산에 필요한 변수
    int number1, number2, add, result;
    int share = 0;
    int max_idx = max_size-1;
    int min_idx = min_size-1;

    // 각 문자열의 끝부터 1자릿수 계산, 10이 넘어가면 다음 자릿수 계산 시 share가 추가로 더해진다
    while (max_idx >= 0) {
        number1 = a[max_idx--] - 48;
        if (min_idx < 0) number2 = 0;
        else number2 = b[min_idx--] - 48;
        
        add = number1 + number2 + share;
        share = add / 10;
        if(share > 0) add -= 10;

        result = add + 48;

        answer.push_back(result);
    }
    if(share > 0) answer.push_back(share + 48);

    // 거꾸로된 계산값을 반대로 뒤집기
    int size = answer.size()-1;
    for (int i=0; i<=(size/2); ++i)
        char_swap(answer[i], answer[size-i]);
    
    return answer;
}