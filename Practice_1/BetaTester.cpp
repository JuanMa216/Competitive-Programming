#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<map<int, int>> caminos;
    caminos.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        map<int, int> recorrido;
        recorrido[u] = v;
        caminos.push_back(recorrido);
    }

    /*
    for (size_t i = 0; i < caminos.size(); i++)
    {
        for (const auto &[inicio, fin] : caminos[i])
        {
            cout << "Mapa " << i << ": " << inicio << " -> " << fin << '\n';
        }
    }
    */

    vector<int> habitacionesRecorridas;
    int i = 0;
    for (i = 0; i < caminos.size(); i++){
        int habitacion = caminos[i].begin()->first;
        if (habitacion != 1) {
            cout << 1 << endl;
            return 0;
        }
    }
    return 0;
}