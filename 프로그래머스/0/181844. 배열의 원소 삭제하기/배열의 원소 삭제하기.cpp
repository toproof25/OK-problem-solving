#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for (int arr_idx = 0; arr_idx < arr.size(); ++arr_idx) {
        bool check = true;   
        
        for (int i=0; i<delete_list.size(); ++i) {
            if ( arr[arr_idx] == delete_list[i] ) {
                check = false;
                break;
            }
        }
        
        if (check)
            answer.push_back(arr[arr_idx]);
    }
    
    return answer;
}