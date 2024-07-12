#include <string>
#include <vector>
#include <iostream>


using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    
    for (int i=0; i<k; i++)
        answer += my_string;

    return answer;
}

int main(){
    string my_string;
    int k;
    cin >> my_string >> k;
    string reslut = solution(my_string, k);
    cout << reslut;
}