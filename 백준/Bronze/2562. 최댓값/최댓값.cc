#include <iostream>
using namespace std;


// 배열에서 최댓값 인덱스를 찾는다
int func_max(int *array){
  int max_index = 0;

  for (int i=1; i<9; i++)
    if (array[i] >  array[max_index])
      max_index = i;
  
  return max_index;
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int array[9];
  for (int i=0; i<9; i++)
    cin >> array[i];

  int max_index;
  max_index = func_max(array);

  cout << array[max_index] << '\n';
  cout << max_index+1 << '\n';

  return 0;
}