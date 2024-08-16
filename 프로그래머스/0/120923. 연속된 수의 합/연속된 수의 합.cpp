#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int num, int total) {
    
    vector<int> answer;
    
    // total/num -> 기준값 mid_num
    int mid_num = total/num; 
    
    // total/mid_num -> 최종 배열의 크기 size, 0으로 mid_num이 0인 경우 사아지는 num이 된다
    int size = mid_num==0 ? num : total/mid_num; 
    
    // mid_num을 중앙에 두는 기준으로 앞뒤 size만큼 채우기
    int min_num = mid_num - size/2;
    int max_num = mid_num + size/2;
    
    // size가 짝수인 경우 최소범위를 +1
    if ( (size&1) == 0 ) ++min_num;
    
    for (int i=min_num; i<=max_num; ++i) {
        answer.push_back(i);
    }
    
    return answer;
}