#include <string>
#include <vector>

using namespace std;

int sum_arr(vector<int> &v){
    int sum = 0;
    printf("%d", v.size());
    for (int i=0; i<v.size(); i++)
        sum += v[i];
    return sum;
}

int solution(vector<int> arr1, vector<int> arr2) {
    
    if (arr1.size() > arr2.size())
        return 1;
    else if (arr1.size() < arr2.size())
        return -1;

    int arr1_sum = sum_arr(arr1);
    int arr2_sum = sum_arr(arr2);
    
    if (arr1_sum > arr2_sum)
        return 1;
    else if (arr1_sum < arr2_sum)
        return -1;
    else
        return 0;


}