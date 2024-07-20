#include <string>
#include <vector>
#include <iostream>

using namespace std;

void upper(string& s){
    for (int i=0; i<s.size(); i++)
    {
      if ('a' <= s[i] && s[i] <= 'z')
      {
        s[i] -= 32;
      }
    }
}

int solution(string myString, string pat) {
    
    upper(myString);
    upper(pat);

    if (myString.find(pat) == std::string::npos)
    {
      return 0;
    }
    else
    {
      return 1;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string myString, pat;
    cin >> myString >> pat;
    
    int result = solution(myString, pat);
    cout << result;

    return 0;
}