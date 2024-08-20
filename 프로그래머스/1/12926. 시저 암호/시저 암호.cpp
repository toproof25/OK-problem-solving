#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {

    
    for (char &c : s)
    {
        if (c == ' ')
            ;
        else if (c < 'a' && c+n > 'Z')
            c += n - 26;
        else if (c+n > 'z')
            c += n - 26;
        else
            c += n;
    }
    
    return s;
}