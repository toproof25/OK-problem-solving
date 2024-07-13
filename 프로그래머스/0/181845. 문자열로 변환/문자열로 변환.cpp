#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    return to_string(n);
}

int main(){
    
    int n;
    cin >> n;
    string result = solution(n);
    cout << n;
    return 0;
}