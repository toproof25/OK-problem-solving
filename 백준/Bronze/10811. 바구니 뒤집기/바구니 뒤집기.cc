#include <iostream>
using namespace std;

void switch_number(int array[], int start, int end){
  int temp = array[start];
  array[start] = array[end];
  array[end] = temp;
}

void reverse(int array[], int start, int end){
  int range = (end-start + 1) / 2;
  for (int i=0; i < range; i++){
    switch_number(array, start+i, end-i);
  }
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
    int start, end;
    cin >> start >> end;
    reverse(array, --start, --end);
  }

  for (int i=0; i<n; i++)
    cout << array[i] << ' ';

  delete[] array;
  return 0;
}