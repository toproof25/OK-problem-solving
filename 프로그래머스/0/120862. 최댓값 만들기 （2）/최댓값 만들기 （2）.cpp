#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = numbers[0]*numbers[1];
    int size = numbers.size();
    
    for (int i=0; i<size-1; ++i) {
        if (numbers[i] == 0) {
            continue;
        }
        else {
            for (int j=i+1; j<size; ++j) 
                if (answer < numbers[i]*numbers[j])
                    answer = numbers[i]*numbers[j];
        }
    }
    
    return answer;
}