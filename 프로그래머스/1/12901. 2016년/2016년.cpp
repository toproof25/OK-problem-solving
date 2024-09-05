#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int mouth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
    for (int i=0; i<a-1; ++i)
        b += mouth[i];
    
    int result = b >= 8 ? b%7 : b;   
    if (result == 1)
        answer = "FRI";
    else if (result == 2)
        answer = "SAT";
    else if (result == 3)
        answer = "SUN";
    else if (result == 4)
        answer = "MON";
    else if (result == 5)
        answer = "TUE";
    else if (result == 6)
        answer = "WED";
    else if (result == 7 || result == 0)
        answer = "THU";
    
    
    return answer;
}