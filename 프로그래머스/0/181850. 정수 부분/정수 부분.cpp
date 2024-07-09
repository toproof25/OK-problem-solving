#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(double flo) {
    int answer = int(flo);
    return answer;
}

int main(){
    double flo;
    cin >>flo;
    int result = solution(flo);
    cout << result;
}