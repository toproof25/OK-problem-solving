#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    int i, j;
    string key;
    
    for (i=1; i<strings.size(); ++i)
    {
        key = strings[i];
        
        for (j=i-1; j>=0; --j)
        {
            if (key[n] < strings[j][n]) {
                strings[j+1] = strings[j];
            }
            else if (key[n] == strings[j][n] && key.compare(strings[j]) < 0) {
                strings[j+1] = strings[j];
            }
            else {
                break;
            }
        }
        
        strings[j+1] = key;
    }
    
    return strings;
}