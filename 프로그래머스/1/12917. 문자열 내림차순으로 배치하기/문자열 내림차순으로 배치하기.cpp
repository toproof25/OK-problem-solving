#include <string>
#include <vector>

using namespace std;


void insertion_sort(string &str) {
    
}


string solution(string s) {

    // insertion sort 삽입 정렬 내림차순
    int i, j, key;
    for (i=1; i<s.size(); ++i)
    {
        key = s[i];
        for (j=i-1; j>=0; --j)
        {
            if (key > s[j])
                s[j+1] = s[j];
            else
                break;
        }
        s[j+1] = key;
    }
    
    return s;
}