#include <string>
#include <vector>

using namespace std;

bool isDelete(vector<int> &indices, int index){
    for (int i=0; i<indices.size(); ++i)
        if (index == indices[i])
            return false;
    return true;
}

string solution(string my_string, vector<int> indices) {
    string answer;
    answer.reserve(my_string.size() - indices.size());

    for(int i=0; i<my_string.size(); ++i)
    {
        if (isDelete(indices, i))
            answer += my_string[i];
    }
        
    return answer;
}