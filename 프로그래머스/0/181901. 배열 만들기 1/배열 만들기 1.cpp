#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer(n/k);
    
    for (int i=k, j=0; i<=n; i+=k)
        answer[j++] = i;
    
    return answer;
}