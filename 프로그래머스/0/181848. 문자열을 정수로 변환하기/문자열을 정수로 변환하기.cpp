#include <string>
#include <vector>


using namespace std;

int solution(string n_str) {
    int answer = std::stoi(n_str);
    return answer;
}

int main(){
    string n_str;
    scanf("%s", &n_str);
    int result = solution(n_str);
    printf("%d", result);
    return 0;
}