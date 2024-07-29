#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int size = num_list.size();
 
    for (int i=0; i<size; ++i) {
        while(num_list[i] != 1) {
            ++answer;
            if (num_list[i]&1)
                num_list[i] = (num_list[i] -1) / 2;
            else
                num_list[i] /= 2;
        }
    }
    
    return answer;
}