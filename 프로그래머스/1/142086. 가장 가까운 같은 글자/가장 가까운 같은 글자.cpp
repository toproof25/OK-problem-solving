#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    answer.reserve(s.size());
    
    int arr[26] = {-1, -1, -1, -1, -1, 
                   -1, -1, -1, -1, -1, 
                   -1, -1, -1, -1, -1, 
                   -1, -1, -1, -1, -1, 
                   -1, -1, -1, -1, -1, 
                   -1
                   };
    
    for (int i=0; i<s.size(); ++i)
    {
        int idx = s[i]-'a';
        
        if (arr[idx] == -1)
            answer.push_back(-1);
        else
            answer.push_back(i-arr[idx]);
        
        arr[idx] = i;
    }
    
    return answer;
}