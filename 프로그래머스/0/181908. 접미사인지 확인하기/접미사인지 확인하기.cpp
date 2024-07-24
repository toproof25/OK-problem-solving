#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {

    int size = my_string.size();
    for (int idx=0; idx<size; ++idx)
    {
        string str = "";
        for (int j=idx; j<size; ++j)
            str += my_string[j];
        
        if(str == is_suffix)
            return 1;
        
    }

    return 0;
}
