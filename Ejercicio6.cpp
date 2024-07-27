#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> deque;
    vector<int> dato(n);
    for (int i = 0; i < n; i++) {
        cin >> dato[i];
    }
    for (int i = 0; i < n; i++) {
        int orden = dato[i];
        if (deque.empty()) {
            deque.push_back(orden);
        } else if (orden < deque.front()) {
            deque.push_front(orden);
        } else if (orden > deque.back()) {
            deque.push_back(orden);
        }
    }
    cout << deque.size();
}