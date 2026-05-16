#include <iostream>
#include <vector>
//Hecho por:Brahian Castro
using namespace std;

int main()
{
    long int n, h;
    cin >> n >> h;
    vector<long int> vectorDuraciones(n);
    vector<long int> vectorDPS(n);
    for (long int i = 0; i < n; i++)
    {
        cin >> vectorDuraciones[i] >> vectorDPS[i];
    }

    long int level = 0;
    long int temporalHP = h;
    while (h > 0)
    {
        for (long int i = 0; i < n; i++)
        {
            long long int duracion = vectorDuraciones[i];
            long long int dps = vectorDPS[i];
            long long int dañoTotal = duracion * (dps - level);
            if (dañoTotal < 0)
            {
                dañoTotal = 0;
            }
            h -= dañoTotal;
        }
        if (h > 0)
        {
            break;
        }
        level++;
        h = temporalHP;
    }
    cout << level << endl;
    return 0;
}