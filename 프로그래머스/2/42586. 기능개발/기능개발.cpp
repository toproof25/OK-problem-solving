#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int day = 0;
    int index = 0;
    int count = 0;
    int size = progresses.size();
    
    while(index < size)
    {
        day += ((99 - progresses[index]) / speeds[index])+1;
        progresses[index] += (day * speeds[index]);
        
        count = 0;
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