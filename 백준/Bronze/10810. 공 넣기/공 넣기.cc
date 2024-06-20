#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int *array = new int[n];
  for (int i=0; i<n; i++)
    array[i] = 0;

  for (int i=0; i<m; i++){
    int start, end, number;
    cin >> start >> end >> number;
    for (--start; start < end ; start++)
      array[start] = number;
  }

  for (int i=0; i<n; i++)
    cout << array[i] << ' ';

  delete[] array;
  return 0;
}