#include <string>
#include <iostream>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0; i<myString.size(); i++){
        if (myString[i] == 'a'){
            answer += 'A';
        }
        else if ('B' <= myString[i] && myString[i] <= 'Z'){
            answer += myString[i] + 32;
        }
        else{
            answer += myString[i];
        }
    }
    return answer;
}

int main(){
    string myString;
    cin >> myString;
    string result = solution(myString);
    cout << result;
}