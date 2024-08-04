#include <string>
#include <vector>

using namespace std;

void int_swap(int& number1, int& number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

vector<int> solution(vector<int> num_list) {
    
    int size = num_list.size()-1;
    for (int i=0; i<(size+1)/2; ++i) {
        int_swap(num_list[i], num_list[size-i]);
    }
    
    return num_list;
}