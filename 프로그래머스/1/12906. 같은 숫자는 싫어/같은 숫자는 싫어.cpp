#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.reserve(arr.size());
    
    for (const int i : arr)
    {
        if (answer.back() != i || answer.empty())
            answer.push_back(i);
    }

    return answer;
}