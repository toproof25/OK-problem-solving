#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer(k, -1);
    answer[0] = arr[0];
    
    for (int i=1, j=1; i<arr.size() && j<=k; ++i)
    {
        if (std::find(answer.begin(), answer.end(), arr[i]) == answer.end())
            answer[j++] = arr[i];
    }

    return answer;
}