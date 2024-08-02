#include <string>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    for (int repeat=10000; repeat>=1; repeat/=100) {
        
        int high_student = 101;
        int high_index = 0;
        
        for (int i=0; i<rank.size(); ++i) {
            if (attendance[i] && high_student > rank[i]) {
                high_student = rank[i];  
                high_index = i;
            }   
        }
   
        answer += (repeat * high_index);
        attendance[high_index] = false;
    }
    
    return answer;
}