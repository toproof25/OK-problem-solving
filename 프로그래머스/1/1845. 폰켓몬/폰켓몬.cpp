#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    map<int, int> ponketmonBox;
    
    // 중복이 없어야 하므로 map에 저장
    for (int n : nums)
    {
        ponketmonBox[n]++;
    }
    
    int getPonketmon = nums.size() / 2;
    
    if (ponketmonBox.size() >= getPonketmon)
    {
        return getPonketmon;
    }
    else
    {
        return ponketmonBox.size();
    }
}