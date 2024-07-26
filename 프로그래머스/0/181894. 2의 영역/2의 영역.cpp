#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start = -1;
    int end = -1;
    
    // 2가 시작되는 start index 구하기
    for (int i=0; i<arr.size(); ++i){
        if (arr[i] == 2){
            start = i;
            break;
        }
    }
    // 2가 없으면 [-1] 리턴
    if (start==-1)
        return {-1};
    
    // 2가 끝나는 end index 구하기
    for (int i=arr.size()-1; i>=start; --i){
        if (arr[i] == 2){
            end = i;
            break;
        }
    }
    
    // start ~ end 배열 만들기
    for ( ; start<=end; ++start){
        answer.push_back(arr[start]);
    }
    
    return answer;
}