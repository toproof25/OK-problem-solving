#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    int end_idx = 0;
    bool check = false;
    int pSize = pat.size();
    
    // 마지막 인덱스부터 pat문자열을 탐색
    for (int i = myString.size()-1; i >= pSize-1; --i) {
        
        int for_size = i-pSize+1;
        check = true;
        
        for(int j=for_size; j <= i; ++j) {
            cout << myString[j];
            if (myString[j]!=pat[j-for_size])
                check = false;
        }
        
        if (check) {
            end_idx = for_size;
            break;
        }
    }
    
    for (int i=0; i<end_idx+pSize; ++i)
        answer+=myString[i];
    
    return answer;
}