#include <iostream>
using namespace std;

int sum_recursion(int number){
    if (number/10 == 0)
        return number%10;
    else
        return number%10 + sum_recursion(number/10);    
}

int sum_loop(int number){
    int sum = number%10;
    while ( (number/=10) != 0 ) {
        sum += number%10;
    }
    return sum;
}


int solution(int n)
{
    //int answer = sum_recursion(n);
    int answer = sum_loop(n);
    return answer;
}