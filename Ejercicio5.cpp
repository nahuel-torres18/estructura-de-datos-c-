#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> cola;
    int n,k, n2=1;
    string opcion;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> opcion;
        if (opcion == "AGREGA_IZQ") {
            cin >> k;
            cola.push_front(k);
        } else if (opcion == "AGREGA_DER") {
            cin >> k;
            cola.push_back(k);
        } else if (opcion == "QUITA_IZQ") {
            cola.pop_front();
        } else if (opcion == "QUITA_DER") {
            cola.pop_back();
        } else if (opcion == "ROTA_IZQ") {
            int front = cola.front();
            cola.pop_front();
            cola.push_back(front);
        } else if (opcion == "ROTA_DER"){
            int back = cola.back();
            cola.pop_back();
            cola.push_front(back);
        }
    }

    for (int i = 0; i < cola.size(); i++) {
        cout << cola[i] << " ";
    }
}