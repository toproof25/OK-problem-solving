#include <string>
#include <vector>
#include <iostream>

using namespace std;

void swap_int (int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer(numlist.size(), 0);
    
    // 모든 요소에 n을 빼준다
    for (int i=0; i<numlist.size(); ++i) {
        answer[i] = numlist[i]-n;
    }
    
    // 선택 정렬
    for (int i=0; i<answer.size()-1; ++i) {
        
        // 최소값 인덱스 찾기
        int min_idx = i;
        for (int j=i+1; j<answer.size(); ++j) {
            // 절대값을 적용한 후 최소값 찾기
            if (std::abs(answer[min_idx]) > std::abs(answer[j])) {
                min_idx = j;
            }
            // 두 값이 같다면 양수인 index를 최소값으로 설정
            else if (std::abs(answer[min_idx]) == std::abs(answer[j])) {
                if (answer[min_idx] < answer[j])
                    min_idx = j;
            }
        }
    
        swap_int(answer[min_idx], answer[i]); // 길이가 저장된 벡터 변경
        swap_int(numlist[min_idx], numlist[i]); // 실제 값이 있는 벡터 변경
    }
    
    return numlist;
}