#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (const string &str : babbling)
    {
        bool check = false;
        for (int i=0; i<str.size(); ++i)
        {
            if (str[i] == 'a' && str[i+1] == 'y' && str[i+2] == 'a'){
                check = true;
                i+=2;
            }            
            else if (str[i] == 'w' && str[i+1] == 'o' && str[i+2] == 'o'){
                check = true;
                i+=2;
            }
            else if (str[i] == 'y' && str[i+1] == 'e'){
                check = true;
                ++i;
            }
            else if (str[i] == 'm' && str[i+1] == 'a'){
                check = true;
                ++i;
            }
            else{
                check = false;
                break;
            }
        }
        
        if (check) ++answer;
    }
    
    return answer;
}