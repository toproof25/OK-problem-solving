#include <iostream>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int array[9][9];

  for (int row = 0; row < 9; row++) 
    for (int col = 0; col < 9; col++) 
        cin >> array[row][col];

  int max_num = -1;
  int max_row, max_col;

  for (int row = 0; row < 9; row++) 
  {
    for (int col = 0; col < 9; col++)
    {
        if (array[row][col] > max_num)
        {
          max_num = array[row][col];
          max_row = row;
          max_col = col;
        }
    }
  }

  cout << max_num << '\n';
  cout << max_row+1 << ' ' << max_col+1;

  return 0;

} 
