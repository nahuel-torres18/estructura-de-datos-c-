#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> datos_ordenados;
    vector<int> dato(n);
    for (int i = 0; i < n; i++) {
        cin >> dato[i];
    }
    for (int i = 0; i < n; i++) {
        int orden = dato[i];
        if (datos_ordenados.empty()) {
            datos_ordenados.push_back(orden);
        } else if (orden < datos_ordenados.front()) {
            datos_ordenados.push_front(orden);
        } else if (orden > datos_ordenados.back()) {
            datos_ordenados.push_back(orden);
        }
    }
    for (int i = 0; i < datos_ordenados.size(); i++) {
        cout << datos_ordenados[i] << " ";
    }
    cout << endl;
    cout << datos_ordenados.size();
}