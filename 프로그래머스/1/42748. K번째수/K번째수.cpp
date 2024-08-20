#include <string>
#include <vector>

using namespace std;


void insertion_sort(vector<int> &v){
    
    int i, j, key;
    
    for (i=0; i<v.size(); ++i)
    {
        key = v[i];
        for (j=i-1; j>=0; --j)
        {
            if (key < v[j])
                v[j+1] = v[j];
            else
                break;
        }
        v[j+1] = key;
    }

}



vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (const auto &command : commands)
    {
        vector<int> v(command[1]-command[0]+1, 0);
        
        for (int i=command[0]; i<=command[1]; ++i)
            v[i-command[0]] = array[i-1];
        
        insertion_sort(v);
        
        int key_num = v[command[2]-1];
        answer.push_back(key_num);   
    }
    
    return answer;
}