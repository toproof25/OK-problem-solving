#include <string>
#include <vector>

using namespace std;


int digitCount(int number){
    int remainder;
    for(int i=10; i <= 10000; i*=10)
    {
      remainder = number % i;
      if (remainder == number)
      {
        return i;
      }
    }
    return -1;
}


int solution(int a, int b) {

    int fNum = digitCount(a);
    int sNum = digitCount(b);

    if ( a*sNum + b > b*fNum + a)
      return a*sNum + b;
    else
      return b*fNum + a;
}