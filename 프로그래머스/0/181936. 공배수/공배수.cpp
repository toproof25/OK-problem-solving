#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int n, int m) {

    if (number%n==0 && number%m==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int number, n, m;
    cin >> number >> n >> m;
    
    int result = solution(number, n, m);
    cout << result;
}