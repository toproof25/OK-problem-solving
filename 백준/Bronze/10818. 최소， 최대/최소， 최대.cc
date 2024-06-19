#include <iostream>
using namespace std;

// 배열에서 최소값을 찾는다
int func_min(int array[], int number){
  int min = array[0];
  for (int i=1; i<number; i++)
    if (min > array[i])
      min = array[i];
  return min;
}

// 배열에서 최대값을 찾는다
int func_max(int array[], int number){
  int max = array[0];
  for (int i=1; i<number; i++)
    if (max < array[i])
      max = array[i];
  return max;
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number;
  cin >> number;

  int *array = new int[number];
  for (int i=0; i<number; i++)
    cin >> array[i];

  int min = func_min(array, number);
  int max = func_max(array, number);

  cout << min << ' ' << max;

  delete[] array;
  return 0;
}