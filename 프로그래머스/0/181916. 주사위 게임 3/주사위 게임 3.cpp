#include <string>
#include <vector>

using namespace std;

int abs_int(int number){
    if (number < 0)
        return -number;
    return number;
}

int solution(int a, int b, int c, int d) {
    
    int score = 0;
    
    if (a==b && a==c && a==d) // 모두 같으면
        score = 1111*a;
    
    else if (a==b && a==c) // 3개는 같고 1개가 다른 경우
        score = (10 * a + d) * (10 * a + d);
    
    else if (a==b && a==d)
        score = (10 * a + c) * (10 * a + c);
    
    else if (a==c && a==d)
        score = (10 * a + b) * (10 * a + b);
    
    else if (b==c && b==d) 
        score = (10 * b + a) * (10 * b + a);
    
    else if (a==b && c==d || a==c && b==d) // 2개씩 같은 경우
        score = (a + d) * abs_int(a - d);
    
    else if (a==d && b==c || a==d && b==c)
        score = (a + b) * abs_int(a - b);

    else if (a==b && c!=d) // 2개는 같고 2개는 다른 경우
        score = c * d;
    
    else if (a==c && b!=d)
        score = b * d;
    
    else if (a==d && b!=c)
        score = b * c;
    
    else if (b==c && a!=d)
        score = a * d;
    
    else if (b==d && a!=c)
        score = a * c;
    
    else if (c==d && a!=b)
        score = a * b;
    
    else // 모두 다른 경우
        score = min(a, min(min(b, c), d));
    
    return score;
}