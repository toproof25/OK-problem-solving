#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    // [string find함수 사용]
    //if (my_string.find(target) != std::string::npos) return 1;
    //return 0;

    
    int size = my_string.length()-target.length();
    for (int i=0; i <= size; ++i) {
        
        bool check = true;
        for (int j=i; j < i+target.length() && j < my_string.length(); ++j) {
            if (my_string[j] != target[j-i]) {
                check = false;
                break;
            }
        }
        
        if(check) 
            return 1;
    }
    
    return 0;
}