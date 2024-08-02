#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    /*
    // find함수로 카페라떼인 경우를 체크
    for (string coffee : order) {
        if (coffee.find("cafelatte") != std::string::npos) 
            answer += 5000;
        else
            answer += 4500;   
    }
    */
    
    
    // 카페라떼 이름을 조건으로 모두 체크
    for (string coffee : order) {
        if (coffee == "icecafelatte" || coffee == "cafelatteice" || coffee == "hotcafelatte" || coffee == "cafelattehot" || coffee == "cafelatte") 
            answer += 5000;
        else
            answer += 4500;   
    }
    
    
    
    return answer;
}