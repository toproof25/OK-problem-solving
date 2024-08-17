#include <iostream>

using namespace std;

int main(void) {
    std::cin.tie(0);
    ios::sync_with_stdio(false);
    
    int a, b;
    cin >> a >> b;
    
    for (int i=0; i<b; ++i) {
        for (int j=0; j<a; ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}