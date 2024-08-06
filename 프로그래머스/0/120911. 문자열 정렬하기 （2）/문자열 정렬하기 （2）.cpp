#include <string>
#include <vector>

using namespace std;

void selection_sort(std::string& str) {
    
    for (int i=0; i<str.size()-1; ++i) 
    {
        int min_char = i;
        
        for (int j=i+1; j<str.size(); ++j) 
        {
            if (str[min_char] > str[j])
                min_char = j;
        }
        
        int temp = str[min_char];
        str[min_char] = str[i];
        str[i] = temp;
    }
    
}


string solution(string my_string) {
    string answer = "";
    
    for (char& c : my_string) 
        if (c < 97) c |= ' ';
    
    selection_sort(my_string);
    
    return my_string;
}