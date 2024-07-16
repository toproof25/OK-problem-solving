#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
        
    for(int i=0; i<my_string.size(); i++){
        if (my_string[i] == alp[0])
            answer += alp[0]-32;
        else
            answer += my_string[i];
    }
    
    return answer;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string my_sting;
    string alp;
    cin >> my_sting >> alp;
    string result = solution(my_sting, alp);
    cout << result;
    
    return 0;
}