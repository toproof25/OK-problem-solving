#include <string>
#include <vector>

using namespace std;


int sum_arr(vector<int>& v){
    int sum = 0;
    for (int i=0; i<v.size(); i++)
        sum += v[i];
    return sum;
}

int multiply_arr(vector<int>& v){
    int multiply = 1;
    for (int i=0; i<v.size(); i++)
        multiply *= v[i];
    return multiply;
}

int solution(vector<int> num_list) {
    
    int mul = multiply_arr(num_list);
    int sum = sum_arr(num_list);
    
    if (mul < sum*sum)
        return 1;
    else
        return 0;
    
}