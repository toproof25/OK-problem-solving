#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for (vector<string> v : photo)
    {
        int sum = 0;
        
        for (string n : v) {
            for (int i=0; i<name.size(); ++i) {
                if (n == name[i]) {
                    sum += yearning[i];
                    break;
                }
            }
        }
        
        answer.push_back(sum);
    }
    
    return answer;
}