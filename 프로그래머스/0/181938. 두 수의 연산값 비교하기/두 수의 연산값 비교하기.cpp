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

    int digit = digitCount(b);

    if ( a*digit + b > 2 * a * b)
      return a*digit + b;
    else
      return 2 * a * b;
}