#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if (num1 == num2)
        return 1;
    else
        return -1;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int num1, num2, answer;
    cin >> num1 >> num2;
    answer = solution(num1, num2);
    cout << answer;
    
    return 0;
}