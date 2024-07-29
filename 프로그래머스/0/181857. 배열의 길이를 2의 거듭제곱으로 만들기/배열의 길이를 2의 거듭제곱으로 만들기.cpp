#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    int size = arr.size();
    int pow = 1;
    while (pow < size) {
        pow *= 2;
    }
    
    for (int i=size; i<pow; ++i)
        arr.push_back(0);
    
    return arr;
}