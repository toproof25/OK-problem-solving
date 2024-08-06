#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int idx = -1;
    int size = 0;
    int remainder;
    
    while (num != 0) {
        remainder = num%10;
        num /= 10;
        if (remainder == k)
            idx = size;
        ++size;
    }
    
    if (idx==-1)
        return -1;
    else
        return size-idx;
}