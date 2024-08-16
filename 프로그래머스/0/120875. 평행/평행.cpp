#include <string>
#include <vector>

using namespace std;

// 기울기 구하기
double gradient(int x1, int y1, int x2, int y2) {
    return (double(y2-y1)) / (double(x2-x1));
}
// y절편 구하기
double y_intercept(int m, int x, int y) {
    return y - (m*x);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int arr[3][4] = {{0,1,2,3}, {0,2,1,3}, {0,3,1,2}};
    
    for (int* line : arr){
        int x1 = dots[line[0]][0], y1 = dots[line[0]][1];
        int x2 = dots[line[1]][0], y2 = dots[line[1]][1];

        int x3 = dots[line[2]][0], y3 = dots[line[2]][1];
        int x4 = dots[line[3]][0], y4 = dots[line[3]][1];

        double m1 = gradient(x1, y1, x2, y2);
        double b1 = y_intercept(m1, x1, y1);
        
        double m2 = gradient(x3, y3, x4, y4);
        double b2 = y_intercept(m2, x3, y3);
        
        if (m1 == m2 && (b1 != b2 || b1 == b2)){
            answer = 1;
            break;
        } 
    }
    
    return answer;
}