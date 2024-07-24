#include <string>
#include <vector>

using namespace std;

int digitCount(int number){
    int remainder;
    for(int i=1; i <= 1000000; i*=10)
    {
      remainder = number % i;
      if (remainder == number)
        return i;
    }
}


vector<int> solution(int l, int r) {
    vector<int> arr = {5};
    vector<int> answer;
    
    // 5, 0만 존재하면서 r보다 작은 수를 모두 구하기
    int repeat = digitCount(r) * 5;
    for (int i=50; i<repeat; i*=10)
    {
        arr.push_back(i);
        
        int arr_size = arr.size() - 1;
        for(int j=0; j < arr_size; ++j)
            arr.push_back(arr[j] + i);
    }
    
    // l, r 범위에 해당하지 않는 요소를 제거
    for (int i=0; i<arr.size(); ++i)
    {
        if (l <= arr[i] && arr[i] <= r)
            answer.push_back(arr[i]);
    }
     
    if (answer.empty())
        answer.push_back(-1);
    
    return answer;
}