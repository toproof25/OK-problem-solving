#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string rny_string) {
    string answer(rny_string);

    while(answer.find("m") < answer.size())
    {
        int m_index = answer.find("m");
        answer.replace(m_index, 1, "rn");
    }
    
    return answer;
}

int main(){
    string rny_string;
    cin >> rny_string;
    
    string result =  solution(rny_string);
    cout << result;
    
    return 0;
}