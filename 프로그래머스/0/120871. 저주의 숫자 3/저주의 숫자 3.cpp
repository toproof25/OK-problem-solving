#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool check_three(const int &number) {
    
    // 3의 배수일 경우
    if (number % 3 == 0) { 
        return true;
    }
    // 숫자에 3이 무조건 들어가는 경우
    else if ( number >= 30 && number <= 39 ) {
        return true;
    }
    else if ( number >= 130 && number <= 139) {
        return true;
    }
    else if ( number >= 230 && number <= 239) {
        return true;
    }
    else if ( number >= 300 && number <= 399) {
        return true;
    }
    // 숫자의 첫번째 자리가 3인 경우
    else if (number%10==3) {
        return true;
    }
    
    // 3 포함 or 3의 배수가 아닌 경우 
    return false;
}

int solution(int n) {
    int answer = 1;
    
    for (int i=1; i <= n; ++i, ++answer) {
        while (check_three(answer)) {
            ++answer;
        }
    }
    
    return --answer;
}