#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    answer.reserve(picture.size());
    
    for (string str : picture) {
        string paint = "";
        paint.reserve(str.size() * k);  
        for (int i=0; i<str.size(); ++i) {
            for (int j=0; j<k; ++j)
                paint += str[i];           
        }
        
        for (int j=0; j<k; ++j)
            answer.push_back(paint); 
    }

    return answer;
}