#include <iostream>
using namespace std;

void setValue(int array[][100], int x, int y)
{
  for (int row=x; row<x+10; ++row)
  {
    for (int col=y; col<y+10; ++col)
    {
      array[row][col] = 1;
    }
  }
}

int main()
{
  int array[100][100] = {0,};

  int number;
  cin >> number;

  for(int i=0; i<number; ++i)
  {
    int x, y;
    cin >> x >> y;
    setValue(array, --x, --y);
  }

  int count = 0;
  for (int row=0; row<100; ++row)
    for (int col=0; col<100; ++col)
      if (array[row][col] == 1)
        count++;

  cout << count;

  return 0;
} 
