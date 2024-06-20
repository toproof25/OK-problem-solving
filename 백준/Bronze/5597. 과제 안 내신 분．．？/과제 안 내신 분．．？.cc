#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int array[30];
  for (int i=0; i<30; i++)
    array[i] = 0;

  for (int i=0; i<28; i++){
    int index;
    cin >> index;
    array[index-1] = index;
  }

  for (int i=0; i<30; i++)
    if (array[i] == 0)
      cout << i+1 << '\n';

  return 0;
}