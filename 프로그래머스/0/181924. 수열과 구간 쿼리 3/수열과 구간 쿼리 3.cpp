#include <string>
#include <vector>
#include <iostream>

using namespace std;

void swap_idx(int &number1, int &number2){
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer(arr);
    
    for (int i=0; i<queries.size(); ++i)
    {
        int first_idx = queries[i][0];
        int second_idx = queries[i][1];
        swap_idx(answer[first_idx], answer[second_idx]);
    }
    
    return answer;
}