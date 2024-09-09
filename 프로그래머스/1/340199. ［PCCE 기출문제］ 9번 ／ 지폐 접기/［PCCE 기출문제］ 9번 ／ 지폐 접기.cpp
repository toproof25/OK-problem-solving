#include <string>
#include <vector>

using namespace std;

void swap_int(int &num1, int &num2)
{
    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;

    swap_int(bill[0], bill[1]);
    swap_int(wallet[0], wallet[1]);
    
    while (wallet[0] < bill[0] || wallet[1] < bill[1])
    {
        answer++;
        bill[0] /= 2;
        swap_int(bill[0], bill[1]);
    }
    
    return answer;
}