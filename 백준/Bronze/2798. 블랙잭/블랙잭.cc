#include <iostream>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  int *cards = new int[N];
  int max=0, sum=0;

  cin >> N >> M;

  for(int i=0; i<N; ++i)
  {
    cin >> cards[i];
  }

  // 0, 1, 2 ... 0, 1, 3 ... 모든 경우의 수를 체크
  for(int i=0; i<N-2; ++i)
  {
    for(int j=i+1; j<N-1; ++j)
    {
      for(int k=j+1; k<N; ++k)
      {
        // 현재 최대값보다 크면서 M보다 작을 경우 max값 변경
        if(max < cards[i] + cards[j] + cards[k] && M >= cards[i] + cards[j] + cards[k])
        {
          max = cards[i] + cards[j] + cards[k];
        }
      }
    }
  }

  cout << max;
  delete[] cards;
  return 0;
}