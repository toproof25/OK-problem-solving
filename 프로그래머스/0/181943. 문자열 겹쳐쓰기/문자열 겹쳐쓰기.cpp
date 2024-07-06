#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {

    // 문자열 크기 설정
    int s_size = s+overwrite_string.size();
    if (my_string.size()-s > overwrite_string.size()){
        s_size += my_string.size() - (s + overwrite_string.size());
    }
    string answer(s_size, '\0');
    
    for (int i=0; i<s_size; i++){
        if (i==s)
        {
            for (int j=0; j<overwrite_string.size(); j++)
            {
                answer[i++] = overwrite_string[j];
            }
        }
        answer[i] = my_string[i];
    }

    return answer;
}

int main(){
    string my_string, overwrite_string;
    int s;
    
    cin >> my_string >> overwrite_string >> s;
    
    string result = solution(my_string, overwrite_string, s);
    cout << result;    
    
    return 0;
}