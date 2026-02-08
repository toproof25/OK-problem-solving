#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.reserve(arr.size());
    answer.push_back(arr[0]);
    
    int size = arr.size();
    for (int i=0; i<size; ++i)
    {
        if (answer.back() != arr[i])
            answer.push_back(arr[i]);
    }

    return answer;
}