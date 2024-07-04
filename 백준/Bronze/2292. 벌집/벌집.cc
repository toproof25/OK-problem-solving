#include <iostream>
using namespace std;

int get_room(int value)
{
  int num = 1;
  int index = 1;

  while(true)
  {
    if ( value <= num )
      break;
    num += 6 * index++;
  }

  return index;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int value;
  cin >> value;

  int result = get_room(value);
  cout << result;

  return 0;
} 
