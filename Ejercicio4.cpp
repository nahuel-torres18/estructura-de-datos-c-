#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    char letra;
    deque<char> personas;

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        cin >> letra;
        if (letra == 'E') {
            personas.push_back('P');
        }
        if (letra == 'N') {
            if (personas.size() <= 4) {
                personas.push_back('P');
                cout << "espera" << endl;
            } else {
                cout << "no espera" << endl;
            }
        }
        if (letra == 'F') {
            personas.pop_front();
        }
    }
}