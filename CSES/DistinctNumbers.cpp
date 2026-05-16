#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    vector<int> vAuxiliar;
    vAuxiliar.push_back(v[0]);
    int i = 0;
    for(int j = 0; j < n; j++) {
        if(vAuxiliar[i] != v[j]) {
            vAuxiliar.push_back(v[j]);
            i++;
        }
    }

    cout << vAuxiliar.size() << endl;
    return 0;
}