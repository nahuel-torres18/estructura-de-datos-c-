#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,n2;
    string cadena;
    map<string,int> lista_compras;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> cadena >> n2;
        lista_compras[cadena] = n2;        
    }
    int costo_total = 0;
    for (int i = 0; i < n; i++) {
        cin >> cadena;
        costo_total += lista_compras[cadena];
    }
    cout << costo_total;
}