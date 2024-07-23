#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string first = std::to_string(a) + std::to_string(b);
    string second = std::to_string(b) + std::to_string(a);
    
    int first_number = std::stoi(first);
    int second_number = std::stoi(second);
    
    if (first_number > second_number)
        return first_number;
    else
        return second_number;

}