#include <string>
#include <vector>

using namespace std;

string solution(string s) {

    int mid_idx = s.size()/2;
    if (s.size()&1)
        return {s[mid_idx]};
    else
        return {s[mid_idx-1], s[mid_idx]};
    
}