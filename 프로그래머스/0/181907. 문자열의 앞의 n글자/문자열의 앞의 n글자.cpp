#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    
    string str = "";
    str.reserve(n);
    
    for (int i=0; i<n; ++i)
        str += my_string[i];
    
    return str;
}