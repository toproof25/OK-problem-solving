#include <iostream>
using namespace std;

void func(int array[], int number, int x){
  for (int i=0; i<number; i++)
    if (x > array[i])
      cout << array[i] << ' ';
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int number, x;
  cin >> number >> x;

  int *array = new int[number];
  for (int i=0; i<number; i++)
    cin >> array[i];

  func(array, number, x);

  delete[] array;
  return 0;
}