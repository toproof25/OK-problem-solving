#include <iostream>
#include <vector>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, choice;
  cin >> N;

  vector<int> stack;
  stack.reserve(N);

  for (int i=0; i<N; ++i)
  {
    cin >> choice;
    switch (choice)
    {
      case 1:
        int number;
        cin >> number;
        stack.push_back(number);
        break;

      case 2:
        if(!stack.empty())
        {
          int pop_int = stack.back();
          stack.pop_back();
          cout << pop_int << '\n';
        }
        else
        {
          cout << -1 << '\n';
        }
        break;

      case 3:
        cout << stack.size() << '\n';
        break;

      case 4:
        cout << (stack.empty()? 1 : 0) << '\n';
        break;

      case 5:
        cout << (stack.empty() ? -1 : stack.back()) << '\n';
        break;
    }
  }

  return 0;
}