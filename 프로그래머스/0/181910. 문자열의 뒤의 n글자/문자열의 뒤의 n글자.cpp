#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    int start = my_string.size() - n;
    int end = my_string.size();
    
    for (int i=start; i<end; i++)
    {
        answer += my_string[i];
    }
    
    return answer;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string my_string;
    int n;
    
    cin >> my_string >> n;
    
    string result = solution(my_string, n);
    cout << result;
    
    return 0;
}