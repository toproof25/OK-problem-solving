#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int day = 0;
    int index = 0;
    int count = 0;
    int size = progresses.size();
    
    // 반복 당 하루
    while(index < size)
    {
        count = 0;
        
        progresses[index] += speeds[index];
        day++;
        
        while (progresses[index] >= 100)
        {
            ++count;
            
            if (++index == size) 
                break;
        
            progresses[index] += (day * speeds[index]);
        }
        
        if (count > 0) answer.push_back(count);
    }
    
    return answer;
}