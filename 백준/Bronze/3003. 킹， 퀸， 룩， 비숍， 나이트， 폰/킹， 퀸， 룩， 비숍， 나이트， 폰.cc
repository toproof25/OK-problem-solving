#include <iostream>
using namespace std;

int main(){

  int chess_piec[6] = {1, 1, 2, 2, 2, 8};

  int have_chess_piec[6];
  for (int i=0; i<6; i++)
    cin >> have_chess_piec[i];

  for (int i=0; i<6; i++)
    cout << chess_piec[i] - have_chess_piec[i] << ' ';

  return 0;
}