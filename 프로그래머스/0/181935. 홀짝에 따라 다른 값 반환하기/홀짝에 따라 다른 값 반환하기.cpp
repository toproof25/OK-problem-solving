#include <string>
#include <vector>

using namespace std;


int odd_sum(int number){
    int sum = 0;
    
    for(int i=1; i<=number; i+=2)
        sum += i;
    
    return sum;
}

int even_pow_sum(int number){
    int sum = 0;
    
    for(int i=2; i<=number; i+=2)
        sum += (i*i);

    return sum;
}

int solution(int n) {
    if (n%2 == 0)
        return even_pow_sum(n);
    else
        return odd_sum(n);
}