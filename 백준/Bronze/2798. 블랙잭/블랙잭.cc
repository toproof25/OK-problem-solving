/*
카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다. 카드의 합이 21을 넘지 않는 한도 내에서, 
카드의 합을 최대한 크게 만드는 게임이다. 블랙잭은 카지노마다 다양한 규정이 있다.
한국 최고의 블랙잭 고수 김정인은 새로운 블랙잭 규칙을 만들어 상근, 창영이와 게임하려고 한다.
김정인 버전의 블랙잭에서 각 카드에는 양의 정수가 쓰여 있다. 
그 다음, 딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓는다. 그런 후에 딜러는 숫자 M을 크게 외친다.
이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다. 
블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.
N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.
- 
입력
첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다. 
둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는 양의 정수이다.
합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.

출력
첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  vector<int> cards;
  //int *cards = new int[N];
  int max=0, sum=0;

  cin >> N >> M;
  cards.reserve(N);

  int number;
  for(int i=0; i<N; ++i)
  {
    cin >> number;
    cards.push_back(number);
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
  //delete[] cards;
  return 0;
}