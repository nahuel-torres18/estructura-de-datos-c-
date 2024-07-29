#include <bits/stdc++.h>

using namespace std;
/*Un trabajador tarda una hora en mover 300 ladrillos y una casa necesita 1500 ladrillos*/

int main() {
    int n,k;
    int ladrillosPorCasa = 1500;
    int ladrillosPorHora = 300;
    float resultado;

    cin >> n;
    cin >> k;

    int totalLadrillos = k * ladrillosPorCasa;
    double horasTotales = static_cast<double>(totalLadrillos)/(n*ladrillosPorHora);
    cout << fixed << setprecision(1);
    cout << horasTotales << " horas.";
}