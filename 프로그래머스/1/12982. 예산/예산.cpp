#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

// 삽입 정렬
void insertion_sort(vector<int> &d) {
    int i, j, key;
    for (i=0; i<d.size(); ++i) {
        key = d[i];
        for (j=i-1; j>=0; --j){
            if (key < d[j])
                d[j+1] = d[j];
            else
                break;
        }
        d[j+1] = key;
    }
}


int solution(vector<int> d, int budget) {
    int answer = 0;
    
    insertion_sort(d);
    for (int i=0; i<d.size(); ++i){
        budget -= d[i];
        if (budget < 0)
            break;
        else
            ++answer;
    }
    
    return answer;
}