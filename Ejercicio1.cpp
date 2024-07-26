#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1,n2;
    map<int,int> pelotas;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) {
        int num;
        cin >> num;
        pelotas[num]++;
    }
    for (int i = 1; i <= n2; i++) {
        cout << i << ": " << pelotas[i] << endl;
    }
}