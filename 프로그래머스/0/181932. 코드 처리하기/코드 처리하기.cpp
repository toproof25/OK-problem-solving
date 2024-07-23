#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    
    string ret = "";
    int mode = 0;
    
    for (int idx=0; idx<code.size(); idx++)
    {
        if (mode == 0){
            if (code[idx] == '1')
                mode = 1;
            else
                ret = (idx&1)==0 ? ret+code[idx] : ret;
        }
        else if (mode == 1){
            if (code[idx] == '1')
                mode = 0;
            else
                ret = (idx&1)==1 ? ret+code[idx] : ret;
        }
    }
    
    if(ret.empty())
        return "EMPTY";
    else
        return ret;

}