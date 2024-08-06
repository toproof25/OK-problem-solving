#include <string>
#include <vector>

using namespace std;

void selection_sort(std::vector<int>& v) {
    
    for (int i=0; i<v.size()-1; ++i) 
    {
        int min_idx = i;
        
        for (int j=i+1; j<v.size(); ++j) 
        {
            if (v[min_idx] > v[j])
                min_idx = j;
        }
        
        int temp = v[min_idx];
        v[min_idx] = v[i];
        v[i] = temp;
    }
    
}

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for (char c : my_string) {
        if ('0' <= c && c <= '9') {
            answer.push_back(c-'0');
        }
    }
    
    selection_sort(answer);
    return answer;
}