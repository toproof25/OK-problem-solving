#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for (string my_string : str_list) {
        int size = my_string.length()-ex.length();
        bool tail = true;
        
        // my_string에 ex가 포함되는지 체크
        for (int i=0; i <= size; ++i) {
            bool check = true;
            for (int j=i; j < i+ex.length() && j < my_string.length(); ++j) {
                if (my_string[j] != ex[j-i]) {
                    check = false;
                    break;
                }
            }

            // 부분 문자열이면 반복 종료
            if(check) {
                tail = false;
                break;
            }
                
        }
        
        // ex가 포함되어있지 않으면 문자열 추가
        if(tail) answer += my_string;
        
    }
    
    
    return answer;
}