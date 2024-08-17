#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    if (left==1){
        --answer;
        ++left;
    }
    
    while (left <= right)
    {  
        int count = 2;
        for (int i=2; i<=left/2; ++i)
            if (left%i == 0)
                ++count;
        
        if (count&1)
            answer -= left++;
        else
            answer += left++;    
    }

    return answer;
}