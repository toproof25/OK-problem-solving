#include <string>
#include <vector>
#include <iostream>

using namespace std;


int gcd(int number1, int number2) {
    if (number1%number2 == 0)
        return number2;
    else
        return gcd(number2, number1%number2);
}


int solution(int a, int b) {
    // 기약분수 - 분자/분모의 공약수가 1인 분수
    // 기약분수를 만드는 방법, 최대공약수 gcd를 구하고 각 분자 분모에 나눈다.
    // 분모의 소인수를 구하는 방법, i=2부터 분모%i가 0이면 분모/=n, 아니라면 ++i
    // 소인수를 구하는 과정에서 2 or 5가 아닌 소인수가 나온다면 무한소수를 리턴
    
    int answer = 1;
    int index = 2;
    
    // 기약분수 만들기 (분모만 사용하기에 분모만 연산)
    b /= gcd(max(a, b), min(a, b));
    
    // 소인수 구하기
    while (b != 1)
    {
        if (b % index == 0){
            
            // 소인수가 2, 5가 아닌 다른 수라면 무한소수
            if (index != 2 && index != 5){
                answer = 2;
                break;
            }
            
            b /= index;
        }
        else
            ++index;
        
    }
    
    return answer;
}