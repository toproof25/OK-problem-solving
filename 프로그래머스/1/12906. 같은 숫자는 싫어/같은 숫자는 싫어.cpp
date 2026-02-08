#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.reserve(arr.size());
    
    queue<int> q;
    for (const int i : arr)
        q.push(i);
    
    while(!q.empty())
    {
        if (answer.empty() || answer.back() != q.front())
            answer.push_back(q.front());
        q.pop();
    }

    return answer;
}