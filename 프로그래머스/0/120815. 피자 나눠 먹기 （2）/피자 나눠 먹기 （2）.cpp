#include <string>
#include <vector>

using namespace std;


// 최대공약수 재귀 함수 (유클리드 호제법)
int GCD(int number1, int number2) {
    if (number1 % number2 == 0)
        return number2;
    else
        return GCD(number2, number1 % number2);
}

// 최소공배수 (num1 * num2 / 최대공약수)
int LCM(int number1, int number2) {
    int gcd = GCD(std::max(number1, number2), std::min(number1, number2));
    int lcm = (number1 * number2) / gcd;
    return lcm;
}


int solution(int n) {
    int answer = LCM(n, 6) / 6;
    return answer;
}