#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {    
    std::map<int, int> counts_map;
    
    for (int i=0; i<strArr.size(); ++i) {
        string &str = strArr[i];
        int k = str.size()-1;
        
        if (counts_map.find(k) != counts_map.end())
            counts_map[k]++;
        else
            counts_map[k] = 1;
    }
    
    int max_count = 0;
    for (auto it : counts_map) {
        if (it.second > max_count)
            max_count = it.second;
    }
        
    return max_count;
}