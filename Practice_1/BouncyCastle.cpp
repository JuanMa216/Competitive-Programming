#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int beds= n * 2;
    int result = floor(sqrt(beds));
    cout << result << endl;
    return 0;
}