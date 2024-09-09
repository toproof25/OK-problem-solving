#include <string>
#include <vector>

using namespace std;

int get_time(const string &str)
{
    return ((str[0]-48)*600) + ((str[1]-48)*60) + ((str[3]-48)*10) + ((str[4]-48));
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    // 문자열 시간 -> 정수로 변경
    int time = get_time(pos);
    int time_len = get_time(video_len);
    int opening = get_time(op_start);
    int ending = get_time(op_end);
        
    for (const string &command : commands)
    {
        // 오프닝 스킵 검사
        if (time >= opening && time <= ending)
            time = ending;
        
        // 앞으로, 뒤로 10초
        if (command == "next")
            time += 10;
        else if (command == "prev")
            time -= 10;
        
        // 최소, 최대인 경우 각 값 설정
        if (time < 0)
            time = 0;
        else if (time > time_len)
            time = time_len;
    }
    
    // 오프닝 스킵 검사
    if (time >= opening && time <= ending)
        time = ending;
    
    // 정수 시간을 다시 문자열로 변환
    answer += (time/600)+'0'; time %= 600;
    answer += (time/60)+'0'; time %= 60;
    answer += ':';
    answer += (time/10)+'0';time %= 10;
    answer += time+'0';
    
    return answer;
}