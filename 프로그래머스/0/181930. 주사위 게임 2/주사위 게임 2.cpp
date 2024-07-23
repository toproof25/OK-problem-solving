#include <string>
#include <vector>
#include <cmath>

using namespace std;

int int_power(int number, int pow){
    int power = 1;
    for(int i=1; i<=pow; ++i)
    {
        power *= number;
    }
    return power;
}

int solution(int a, int b, int c) {

    int score = 0;
    
    if (a != b && a != c && b != c)
        score = (a+b+c);
    else if ( a == b && a == c)
        score = (a+b+c) * (int_power(a, 2) + int_power(b, 2) + int_power(c, 2)) * (int_power(a, 3) + int_power(b, 3) + int_power(c, 3));
    else
        score = (a+b+c) * (int_power(a, 2) + int_power(b, 2) + int_power(c, 2));
    
    
    return score;
    
}