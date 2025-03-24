#include <iostream>
#include <vector>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int K, choice, sum=0;
  cin >> K;

  vector<int> stack;
  stack.reserve(K);

  for (int i=0; i<K; ++i)
  {
    cin >> choice;
    if (choice == 0)
    {
      sum -= stack.back();
      stack.pop_back();
    }
    else
    {
      sum += choice;
      stack.push_back(choice);
    }
  }

  cout << sum;
  return 0;
}