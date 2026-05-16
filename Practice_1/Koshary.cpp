#include <iostream>

using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        if(x % 2 != 0 && y % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}