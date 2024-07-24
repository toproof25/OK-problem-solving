#include <string>
#include <vector>

using namespace std;

// 문자열 위치 바꾸기
void string_swap(string &str1, string &str2){
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

// 선택 정렬
void seletion_sort(vector<string> &v){
    for (int i=0; i<v.size()-1; ++i)
    {
        int min_str = i;
        
        for (int j=i+1; j<v.size(); ++j)
        {
            int comp = v[min_str].compare(v[j]);
            if(comp > 0)
                min_str = j;
        }
        
        string_swap(v[i], v[min_str]);
    }
}


vector<string> solution(string my_string) {
    vector<string> answer;
    
    // 접두사 모두 구하기
    int size = my_string.size();
    for (int idx=0; idx<size; ++idx)
    {
        string str = "";
        for (int j=idx; j<size; ++j)
            str += my_string[j];
        answer.push_back(str);
    }
    
    seletion_sort(answer);
    
    return answer;
}