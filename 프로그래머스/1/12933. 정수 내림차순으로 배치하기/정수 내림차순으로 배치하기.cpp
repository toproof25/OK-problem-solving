#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> arr;
    
    // 숫자 분리
    while (n != 0)
    {
        arr.push_back(n%10);
        n /= 10;
    }
    
    // 선택 정렬 내림차순
    for (int i=0; i<arr.size()-1; ++i)
    {
        int max_idx = i;
        for (int j=i+1; j<arr.size(); ++j)
        {
            if (arr[max_idx] < arr[j])
                max_idx = j;
        }
        
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
    
    // 숫자 합치기
    for (const int &i : arr)
        answer = answer * 10 + i;
    
    return answer;
}