#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    
    int size = my_string.size();
    for (int idx=0; idx<size; ++idx)
    {
        string str = "";
        for (int j=0; j<idx; ++j)
            str += my_string[j];
        
        if(str == is_prefix)
            return 1;
        
    }
    
    return 0;
}