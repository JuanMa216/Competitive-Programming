#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, k, a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            cin >> a;
            v.push_back(a);
        }

        if (k >= 2) {
            cout << "YES" << endl;
        } else {
            
            if (is_sorted(v.begin(), v.end())) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        /* for (int num = 0; num < n; num++) {
            cout << v[num] << " ";
        } */
        //cout << endl;
    }
        
    return 0;
}