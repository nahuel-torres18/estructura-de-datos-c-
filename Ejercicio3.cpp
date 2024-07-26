#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,mayor = INT_MIN,menor=INT_MAX;
    string nombre,mas_votado,menor_votado;
    map<string,int> votaciones;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nombre;
        if (votaciones.find(nombre) != votaciones.end()) {
            votaciones[nombre]++;
        } else {
            votaciones[nombre] = 1;
        }
    }

    for (map<string,int>::iterator it = votaciones.begin(); it != votaciones.end(); it++) {
        if (it->second > mayor) {
            mayor = it->second;
            mas_votado = it->first;
        }
        if (it->second < menor) {
            menor = it->second;
            menor_votado = it->first;
        }
    }

    cout << mas_votado << " "  << mayor << endl;
    cout << menor_votado << " "  << menor << endl;
}