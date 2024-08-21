#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> numbers) {
    map<int, int> sum;
    vector<int> answer;
    
    for (int i=0; i<numbers.size()-1; ++i)
        for (int j=i+1; j<numbers.size(); ++j)
            sum[ numbers[i]+numbers[j] ]++;
    
    
    for (const pair<int, int> iter : sum)
        answer.push_back(iter.first);
    
    
    return answer;
}