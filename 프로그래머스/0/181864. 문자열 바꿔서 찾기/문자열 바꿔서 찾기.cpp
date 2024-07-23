#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i=0; i<myString.size(); i++)
        myString[i] = myString[i] == 65 ? myString[i]+1 : myString[i]-1;
    
    if(myString.find(pat) == std::string::npos)
        return 0;
    else
        return 1;
    
    
    return answer;
}