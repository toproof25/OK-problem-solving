#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    
    for (string str : dic) 
    {
        // spell이랑 같은 크기일 경우에만 검사
        if (str.size() == spell.size()) 
        {
            short size = spell.size();
            for (string sp : spell)
                for (char c : str)
                    if (sp[0] == c) {
                        --size;
                        break;
                    }
            
            if (size == 0) {
                answer = 1;
                break;
            }
        }
    }
    
    return answer;
}