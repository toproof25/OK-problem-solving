#include <string>
#include <vector>
#include <iostream>

using namespace std;

void seletion_sort(vector<int> &v){
  for (int i = 0; i < v.size()-1; ++i)
  {
    int low = i;
    for (int j = i+1; j < v.size(); ++j)
    {
      if (v[j] < v[low])
      {
        low = j;
      }
    }
    
    int temp = v[i];
    v[i] = v[low];
    v[low] = temp;
  }
}

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    seletion_sort(num_list);
    for (int i=0; i<5; i++)
    {
      answer.push_back(num_list[i]);
    }
    return answer;
}