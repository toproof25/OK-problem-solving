#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    int size = common.size()-1;
    int number = common[size] - common[size-1];
    bool result = 1;
    
    for (int i=size-1; i>=1; --i) {
        if (number != common[i] - common[i-1]) {
            result = 0;
            break;
        }
    }
    
    if (result) {
        answer = common[size] + number;
    }
    else {
        number = common[size] / common[size-1];
        answer = common[size] * number;
    }
    
    return answer;
}