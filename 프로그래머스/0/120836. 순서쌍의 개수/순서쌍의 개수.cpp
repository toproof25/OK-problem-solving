#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    // 약수의 개수
    if (n==1) {
        return 1;
    }
    else {
        int answer = 2;
        for (int i=2; i<n/2+1; ++i) {
            if (n%i==0) ++answer;
        }
        return answer;
    }
    
    
}