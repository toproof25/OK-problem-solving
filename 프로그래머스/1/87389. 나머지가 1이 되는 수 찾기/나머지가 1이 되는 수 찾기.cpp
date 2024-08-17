#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if (n&1){ // 홀수라면 무조건 2
        answer = 2;
    }
    else{ // 짝수인 경우 3부터 시작
        for (int i=3; i<n; i+=2) {
            if (n%i == 1){
                answer = i;
                break;
            }
        }
    }
    return answer;
}