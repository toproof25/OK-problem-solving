#include <string>
#include <vector>

using namespace std;

long long power(int number, int count){
    if (count == 0)
        return 1;
    
    long long pow = number;
    while (count-- > 1) {
        pow *= number;
    }
    return pow;
}

int solution(int n) {
    int answer = 0;
    long long number = 0;
    
     
    while (n!=0)
    {
        number = number * 10 + (n%3);
        n /= 3;
    }

    int idx = 0;
    while (number !=0)
    {
        answer += (number % 10) * power(3, idx++);
        number /= 10;
    }   
    
    return answer;
}