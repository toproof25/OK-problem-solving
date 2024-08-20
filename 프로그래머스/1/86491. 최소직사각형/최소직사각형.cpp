#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width=0, hight=0;
    
    for (vector<int> &v : sizes)
    {
        if (v[0] < v[1]){
            int temp = v[0];
            v[0] = v[1];
            v[1] = temp;
        }
        
        if (width < v[0]) width = v[0];
        if (hight < v[1]) hight = v[1];
    }
    
    answer = width * hight;
    
    return answer;
}