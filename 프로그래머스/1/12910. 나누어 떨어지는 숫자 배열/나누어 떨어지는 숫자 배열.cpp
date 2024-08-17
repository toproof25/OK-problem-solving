#include <string>
#include <vector>

using namespace std;

void selection_sort(vector<int> &v) {
    
    if (v.empty()) {
        v.push_back(-1);
    }
    else {
        int temp, min_idx;
        for (int i=0; i<v.size()-1; ++i)
        {
            min_idx = i;
            for (int j=i+1; j<v.size(); ++j) 
            {
                if (v[min_idx] > v[j])
                    min_idx = j;
            }
            
            temp = v[min_idx];
            v[min_idx] = v[i];
            v[i] = temp;
            
        }
    }
  
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (const int &i : arr)
        if (i%divisor==0)
            answer.push_back(i);
    
    selection_sort(answer);
    
    return answer;
}