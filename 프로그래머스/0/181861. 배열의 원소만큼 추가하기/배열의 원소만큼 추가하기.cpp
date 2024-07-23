#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i=arr.size()-1; i>=0; i--)
        answer.insert(answer.begin(), arr[i], arr[i]);

    return answer;
}