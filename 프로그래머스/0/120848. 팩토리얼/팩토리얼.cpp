#include <string>
#include <vector>

using namespace std;


int factorial(int number) {
    if (number == 1)
        return number;
    else
        return number * factorial(number-1);
}

int solution(int n) {
    int answer = 0;
    while (factorial(++answer) <= n) {}    
    return --answer;
}