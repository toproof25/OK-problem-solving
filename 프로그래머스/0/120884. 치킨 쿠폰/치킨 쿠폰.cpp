#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int chicken) {
    
    int answer = 0;
    int coupon=0;
    
    while (chicken != 0)
    {
        coupon += (chicken%10);
        chicken /= 10;
        answer += chicken;
        
        if (coupon >= 10) {
            int n = coupon/10;
            answer += n;
            coupon %= 10;
            coupon += n;
        }
    }
    

 
    
    return answer;
}