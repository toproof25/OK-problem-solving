#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int a = 0;
    int b = 1;
    int c = 2;
    
    for (int i=1; i<3; ++i)
        if(sides[a] < sides[i])
            a = i;
    
    if (a==1) {
        b = 0;
        c = 0;
    }
    else if (a==2) {
        b = 0;
        c = 1;
    }
    
    
    if (sides[a] < sides[b]+sides[c])
        return 1;
    else
        return 2;

}