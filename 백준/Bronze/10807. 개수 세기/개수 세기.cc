#include <iostream>
using namespace std;

void func(int array[], int number, int cNum, int *count){
  for (int i=0; i < number; i++){
    if(array[i] == cNum)
      (*count)++;
  }
}

int main(){
  int number, cNum;
  int count = 0;

	cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> number;

  int *array = new int[number];
  for(int i=0; i<number; i++)
    cin >> array[i];

  cin >> cNum;

  func(array, number, cNum, &count);

  cout << count;

  return 0;
}