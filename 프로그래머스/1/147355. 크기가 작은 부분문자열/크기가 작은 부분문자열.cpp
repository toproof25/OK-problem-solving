#include <string>
#include <vector>

using namespace std;

// str에서 start~end까지 문자열을 정수로 반환
long long char_to_int(const string &str, int start, int end) {
    long long result=0;
    while(start < end)
        result = result*10 + (str[start++]-'0');
    return result;
}

int solution(string t, string p) {
    int answer = 0;
    
    // 문자열 p 사이즈, 숫자 구하기
    int repeat = p.size();
    long long p_number = char_to_int(p, 0, repeat);
    
    // t에서 p보다 작은 부분 정수 카운트
    for (int i=0; i<=t.size()-repeat; ++i)
    {
        long long number = char_to_int(t, i, i+repeat);
        if (number <= p_number) ++answer;
    }
    
    return answer;
}