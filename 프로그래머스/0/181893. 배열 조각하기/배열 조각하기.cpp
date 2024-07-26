#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    for (int que=0; que<query.size(); ++que)
    {
        if (que&1) // 홀수
            arr.erase(arr.begin(), arr.begin()+query[que]);
        else // 짝수
            arr.erase(arr.begin()+query[que]+1, arr.end());
    }
    return arr;
}