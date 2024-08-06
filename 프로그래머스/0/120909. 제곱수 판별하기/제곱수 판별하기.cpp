#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    
    // 제곱근 - 소수점에 값이 있을 경우 제곱수가 아니다
    double answer = std::sqrt(n);
    if (0 < answer - int(sqrt(n)))
        return 2;
    else
        return 1;
    
    // 반복문으로 i의 제곱이 n과 같은 경우라면 제곱수이다
    // for (int i=1; i<1001; ++i) {
    //     if(i*i == n){
    //         answer = 1;
    //         break;
    //     }
    // }
}