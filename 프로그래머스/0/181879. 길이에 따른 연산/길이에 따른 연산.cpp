#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int result = 0;
    
    if (num_list.size() >= 11)
    {
        for (int i=0; i<num_list.size(); i++)
            result += num_list[i];
    }
    else
    {
        result++;
        for (int i=0; i<num_list.size(); i++)
            result *= num_list[i];
    }
    
    
    return result;
}