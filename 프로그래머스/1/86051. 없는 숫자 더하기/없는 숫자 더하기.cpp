#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (const int &i : numbers)
        arr[i] = 0;
    
    for (const int &i : arr)
        answer += i;
    
    return answer;
}