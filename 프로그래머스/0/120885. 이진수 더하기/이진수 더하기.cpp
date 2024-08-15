#include <string>
#include <vector>

using namespace std;

// 재귀로 이진수 더하기
char add_binary(string &answer, const string &bin1, const string &bin2, short b1_idx, short b2_idx, short b, short carry) {
    if (b1_idx == -1 && b2_idx == -1) {
        if (carry == 1)
            return '1';
        return '\0';
    }
    else {
        // 이진수 덧셈
        short b1 = b1_idx>=0 ? (bin1[b1_idx]-48) : 0;
        short b2 = b2_idx>=0 ? (bin2[b2_idx]-48) : 0;
        b = b1 + b2 + carry;
        
        // 범위 설정
        if (b1_idx >= 0) --b1_idx;
        if (b2_idx >= 0) --b2_idx;
        
        // b, carry 설정
        if (b == 3){
            b=1; carry=1;
        }
        else if (b == 2){
            b=0; carry=1;
        }
        else if (b == 1){
            b=1; carry=0;
        }
        else{
            b=0; carry=0;
        }
    
        char c = add_binary(answer, bin1, bin2, b1_idx, b2_idx, b, carry);
        if (c != '\0') answer += c;
        return b+'0';
    }

}


string solution(string bin1, string bin2) {
    string answer = "";
    answer += add_binary(answer, bin1, bin2, bin1.size()-1, bin2.size()-1, 0, 0);
    return answer;
}

