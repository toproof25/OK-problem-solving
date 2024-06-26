#include <iostream>
using namespace std;



int main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  string title[20];
  float credit[20];
  float grade[20];

  for(int i=0; i<20; i++)
  {
    string cAlpha;
    cin >> title[i] >> credit[i] >> cAlpha;

    float alhpaToNum = 0.0;
    if (cAlpha[0]<69)
    {
      alhpaToNum = 69 - cAlpha[0];
      if (cAlpha[1] == '+')
        alhpaToNum+=0.5;
    }
    else if(cAlpha[0] == 'P')
      alhpaToNum = -1;

    grade[i] = alhpaToNum;    
  }

  float sum = 0;
  float sum_credit = 0;
  for(int i=0; i<20; i++)
  {
    if (grade[i] == -1) continue;
    sum += (credit[i] * grade[i]);
    sum_credit += credit[i];
  }

  float final_grade = sum / sum_credit;

  cout << fixed;
  cout.precision(6);
  cout << final_grade;
  return 0;
}