#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> &answer = arr;
    
    if (answer.size() == 1) 
    {
        return {-1};
    }
    else 
    {
        vector<int>::iterator min_iter = answer.begin();
        for (auto iter = min_iter+1; iter != answer.end(); ++iter)
        {
            if (*min_iter > *iter)
                min_iter = iter;
        }
        answer.erase(min_iter);
    }
        
    
    return answer;
}