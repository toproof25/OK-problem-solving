#include <iostream>
using namespace std;

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

  int number;
  cin >> number;

  int *array = new int[number];
  for (int i=0; i<number; i++)
    cin >> array[i];

  int max = func_max(array, number);

  float sum = 0;
  float average = 0;

  for (int i=0; i<number; i++){
    sum += (float(array[i]) / max) * 100;
  }

  std::cout << std::fixed; 
  std::cout.precision(5); 
  average = sum / number;
  cout << average;

  delete[] array;
  return 0;
}