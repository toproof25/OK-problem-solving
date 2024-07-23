#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string word = "";
    int size = my_string.size();
    for(int i = 0; i < size; i++)
    {
        if (my_string[i] == ' '){
            answer.push_back(word);
            word.clear();
        }
        else if (i == size-1){
            word += my_string[i];
            answer.push_back(word);
        }
        else{
            word += my_string[i];
        }
    }
    
    return answer;
}