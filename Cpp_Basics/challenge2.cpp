#include <iostream>

using namespace std;

int main() {
    long long int numbers[3];
    long long int n;
    for(int i = 0; i < 3; i++) {
        cin >> n;
        numbers[i] = n;
    }

    if((numbers[0] % numbers[2] == 0) && (numbers[1] % numbers[2] == 0)) {
        cout << "Both" << endl;
    } else if(numbers[0] % numbers[2] == 0) {
        cout << "Memo" << endl;
    } else if(numbers[1] % numbers[2] == 0) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}