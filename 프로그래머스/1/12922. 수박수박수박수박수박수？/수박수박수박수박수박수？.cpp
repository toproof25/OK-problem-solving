#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    
    string answer = "";
    answer.reserve(n);
    
    for (int i=1; i<=n; ++i){
        answer += i&1 ? "수" : "박";
    }
    
    return answer;
}