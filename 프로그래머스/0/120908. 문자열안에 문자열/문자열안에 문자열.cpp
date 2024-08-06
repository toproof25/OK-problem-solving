#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    
    
    // find 함수 사용
    // int answer = 1;
    // if (str1.find(str2) == std::string::npos) answer = 2;
    
    int answer = 2;
    int str1_size = str1.size();
    int str2_size = str2.size();
    
    for (int i=0; i<=str1_size - str2_size; ++i) {
        
        bool check = true;
        
        // i번째부터 str2와 비교하며, 다른 부분이 있다면 check를 false로
        for (int j=i; j<i+str2_size; ++j) {
            if (str1[j] != str2[j-i]) {
                check = false;
                break;
            }
        }
        
        // 다른 부분이 없었다면 있다는 의미로 반복 종료
        if (check) {
            answer = 1;
            break;
        }
        
    }
    
    
    return answer;
}