#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numeros1(n);
    vector<int> numeros2(n);
    for (int i = 0; i < numeros1.size(); i++) {
        cin >> numeros1[i];
    }
    for (int i = 0; i < numeros2.size(); i++) {
        cin >> numeros2[i];
    }
    for (int i = 0; i < numeros1.size(); i++) {
        cout << numeros1[i]+numeros2[i] << " ";
    }
}