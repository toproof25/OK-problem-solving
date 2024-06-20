#include <iostream>
using namespace std;

bool remainder_duplication(int different[], int number){
  for(int i = 0; i < 10; i++){

    if (different[i] == number){
      return true;
    }
    else if (different[i] == -1){
      different[i] = number;
      break;
    }  
  }
  return false;
}

int main(){
	cin.tie(NULL);
  ios::sync_with_stdio(false);

  int array[10];
  int remainder[10];
  int different[10];
  int count = 0;

  for (int i=0; i<10; i++){
    int number;
    cin >> number;

    array[i] = number;
    remainder[i] = number % 42;
    different[i] = -1;
  }

  for (int i=0; i<10; i++){
    int number = remainder[i];
    bool isDuplication = remainder_duplication(different, number);
    if (!isDuplication) {
      count++;
    }
  }
  
  cout << count;

  return 0;
}