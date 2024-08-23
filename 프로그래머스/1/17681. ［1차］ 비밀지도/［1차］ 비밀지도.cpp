#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n, "");
    int binary = std::pow(2, n-1);
    string map="";
    
    for (int i=0; i<arr1.size(); ++i)
    {
        // OR 연산
        arr1[i] |= arr2[i];
        
        // 각 자릿수에 1 or 0 확인 후 string에 더하기
        for (int j=binary; j>=1; j/=2)
            map += (j&arr1[i]) != 0 ? '#' : ' ';
        
        answer[i] = map;
        map.clear();
    }
    
    return answer;
}