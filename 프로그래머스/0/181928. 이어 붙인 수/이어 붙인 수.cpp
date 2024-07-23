#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int odd_sum = 0;
    int even_sum = 0;
    
    int size = num_list.size();
    for (int i=0; i<size; ++i)
    {
        if(num_list[i]&1){
            odd_sum += num_list[i];
            odd_sum *= 10;
        }
        else {
            even_sum += num_list[i];
            even_sum *= 10;
        }
    }
    
    return even_sum/10 + odd_sum/10;
}