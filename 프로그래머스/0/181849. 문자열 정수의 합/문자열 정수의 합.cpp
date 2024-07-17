#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(int i=0; i<num_str.size(); i++){
        answer += num_str[i]-48;
    }
    return answer;
}


int main(){
    string num_str;
    scanf("%s", &num_str);
    int result = solution(num_str);
    printf("%d", result);
    return 0;
}