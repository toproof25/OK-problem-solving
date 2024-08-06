#include <string>
#include <vector>

using namespace std;

bool composite_number(int number) {
    for (int i=2; i<=number/2; ++i) 
    {
        if (number%i == 0) 
            return true;
    }
    return false;
}


int solution(int n) {
    int answer = 0;
    
    for (int i=4; i<=n; ++i) {
        if (composite_number(i)) {
            ++answer;
        }
    }
 
    return answer;
}