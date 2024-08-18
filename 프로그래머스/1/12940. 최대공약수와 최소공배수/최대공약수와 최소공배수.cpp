#include <string>
#include <vector>

using namespace std;


int gcd(int num1, int num2) {
    if (num1%num2 == 0)
        return num2;
    else
        return gcd(num2, num1%num2);
}

int lcm(int num1, int num2, int g) {
    int l = num1 * num2 / g;
    return l;
}

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    
    int &max_num = n>m ? n : m;
    int &min_num = n>m ? m : n;
    
    int g = gcd(max_num, min_num);
    int l = lcm(max_num, min_num, g);
    
    return {g, l};
}