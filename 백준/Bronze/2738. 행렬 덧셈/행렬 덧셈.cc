#include <iostream>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int row, col;
  cin >> row >> col;

  int array[2][row][col];
  for (int i = 0; i < 2; i++) 
    for (int r = 0; r < row; r++) 
      for (int c = 0; c < col; c++)
        cin >> array[i][r][c];

  int sum_matrix[row][col];
  for (int r = 0; r < row; r++) 
    for (int c = 0; c < col; c++) 
      sum_matrix[r][c] = array[0][r][c] + array[1][r][c];

  for (int r = 0; r < row; r++) 
  {
    for (int c = 0; c < col; c++) 
      cout << sum_matrix[r][c] << ' ';
    cout << '\n';
  }

  return 0;

} 
