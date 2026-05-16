#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, x;
    vector<int> v;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> x;
        v.clear();
        for(int k = 0; k < n; k++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        vector<int> distancias;

        for(int j = 0; j < v.size(); j++) {
            if(j == 0){
                distancias.push_back(v[j]); 
            } else {
                distancias.push_back(v[j] - v[j - 1]);  
            }
        }    

        int tramo_final = 0;
        tramo_final = 2 * (x - v[n - 1]); 
        distancias.push_back(tramo_final);
        int max = *max_element(distancias.begin(), distancias.end());
        cout << max << endl;    

        /* for(int j = 0; j < distancias.size(); j++) {
            cout << distancias[j] << " ";
        } 
        cout << endl;*/ 
          
    }

    return 0;
}