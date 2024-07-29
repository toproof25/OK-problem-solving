#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    bool check = false;
    int pSize = pat.size();
    
    for (int i = 0; i <= myString.size()-pSize; ++i) {
        check = true;
        
        for(int j=i; j < i+pSize; ++j)
            if (myString[j]!=pat[j-i])
                check = false;
        
        if (check)
            ++answer;
    }
    return answer;
}