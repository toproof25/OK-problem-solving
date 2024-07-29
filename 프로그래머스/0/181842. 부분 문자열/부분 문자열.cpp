#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    
    for (int i=0; i<=str2.size()-str1.size(); ++i) {
        bool check = true;
        for (int j=i; j<i+str1.size(); ++j) {
            if (str1[j-i] != str2[j]) {
                check = false;
                break;
            }
        }
        if (check)
            return 1;
    }
    
    return 0;
}