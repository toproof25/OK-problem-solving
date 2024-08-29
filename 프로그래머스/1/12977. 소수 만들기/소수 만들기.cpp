#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int number) {

    // number의 최소값은 1+2+3 = 6 이상 (각 num은 중복x, 3개의 합)
    // 10미만 소수는 7만 존재한다.
    if (number==7) 
    {
        return true;
    }
    else if (number&1)
    {
        for (int i=3; i<number/2; i+=2)
            if (number%i==0) 
                return false;
        return true;
    }
    else
    {
        return false;
    }
    
}

int solution(vector<int> nums) {
    int answer = 0;

    for (int i=0; i<nums.size()-2; ++i)
    {
        for (int j=i+1; j<nums.size()-1; ++j)
        {
            for (int k=j+1; k<nums.size(); ++k)
            {
                int number = nums[i] + nums[j] + nums[k];
                if(isPrime(number))
                    ++answer;
            }
        }
    }

    return answer;
}