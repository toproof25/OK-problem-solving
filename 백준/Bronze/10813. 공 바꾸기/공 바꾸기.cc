#include <iostream>
using namespace std;

void switch_number(int array[], int basket1, int basket2){
  int temp = array[basket1];
  array[basket1] = array[basket2];
  array[basket2] = temp;
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int *array = new int[n];
  for (int i=0; i<n; i++)
    array[i] = i+1;

  for (int i=0; i<m; i++){
    int basket1, basket2;
    cin >> basket1 >> basket2;
    switch_number(array, --basket1, --basket2);
  }

  for (int i=0; i<n; i++)
    cout << array[i] << ' ';

  delete[] array;
  return 0;
}