#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int size = A.size();
    
    for (int i=0, B_idx=i; i<size; ++i, B_idx = i) {

        bool check = true;
        
        for (const char &c : A) {
            if (B[B_idx++] != c) {
                check = false;
                break;
            }

            if (B_idx > size-1) 
                B_idx = 0;
        }
        
        if (check) 
            return i;
    }
    
    return -1;
}