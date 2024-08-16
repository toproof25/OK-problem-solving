#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int number1=0, number2=0;
    int n=0;
    
    for (int i=0; i<polynomial.size(); ++i)
    {
        if ('0' <= polynomial[i] && polynomial[i] <= '9') {
            n = n==0 ? polynomial[i]-'0' : n; 
            if ('0' <= polynomial[i+1] && polynomial[i+1] <= '9') {
                n = n * 10 + (polynomial[i+1]-'0');
            }
            else{
                if (polynomial[i+1] == 'x') number1 += n;
                else number2 += n;
                n=0; i++;
            }
        }
        else if (polynomial[i] == 'x') {
            ++number1;
        }    
    }
    
    
    if (number1>0){
        answer += number1==1 ? "x" : to_string(number1)+"x";
        if (number2>0) answer += " + "+to_string(number2);
    }
    else if (number2>0)
        answer += to_string(number2);
    
    return answer;
}