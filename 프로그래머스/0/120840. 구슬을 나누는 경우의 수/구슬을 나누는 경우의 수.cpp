#include <string>
#include <vector>

using namespace std;


// 재귀를 이용한 팩토리얼
long double factorial(int n) {
    if (n==1) 
        return n;
    else
        return factorial(n-1) * n;
}

int solution(int balls, int share) {
    
    if (balls == share) 
        return 1;
    else if (share == 1)
        return balls;
    else
        return factorial(balls) / (factorial(balls-share) * factorial(share));
}