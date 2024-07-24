#include <string>
#include <vector>
#include <iostream>
using namespace std;


void char_swap(char &c1, char &c2){
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

string solution(string my_string, vector<vector<int>> queries) {
    string answer(my_string);
    
    for (int i=0; i<queries.size(); ++i)
    {
        int start_idx = queries[i][0];
        int end_idx = queries[i][1];
        
        for (int j = 0; j <= (end_idx-start_idx)/2; ++j)
            char_swap(answer[start_idx + j], answer[end_idx - j]);
    }
    
    return answer;
}