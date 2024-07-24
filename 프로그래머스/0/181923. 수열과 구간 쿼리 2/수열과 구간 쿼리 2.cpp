#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (int i=0; i<queries.size(); ++i)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        int min_number = 1000001;
                
        for (; s <= e ; ++s)
        {
            if (arr[s] > k && arr[s] < min_number)
                min_number = arr[s];
        }

        answer.push_back(min_number == 1000001 ? -1 : min_number);
    }
    
    
    return answer;
}