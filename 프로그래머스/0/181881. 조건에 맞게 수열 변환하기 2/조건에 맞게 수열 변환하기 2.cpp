#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int count = -1;
    bool isChanged = true;
    
    while (isChanged) {
        ++count;
        isChanged = false;
        for (int i=0; i<arr.size(); ++i) {
            if (arr[i] >= 50 && (arr[i]&1)==0) {
                arr[i] /= 2;
                isChanged = true;
            }
            else if (arr[i] < 50 && (arr[i]&1)==1) {
                arr[i] = arr[i] * 2 + 1;
                isChanged = true;
            }
        }
    }
    
    return count;
}