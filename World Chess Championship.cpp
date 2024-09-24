#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int X, carlsenPremio;
        int carlsenPunt = 0;
        int chefPunt = 0;
        string p;
        cin >> X >> p;
        for (char result : p) {
            if (result == 'C')
                carlsenPunt += 2;
            else if (result == 'N')
                chefPunt += 2;
            else if (result == 'D') {
                carlsenPunt++;
                chefPunt++;
            }
        }
        if (carlsenPunt > chefPunt)
            carlsenPremio = 60 * X;
        else if (chefPunt > carlsenPunt)
            carlsenPremio = 40 * X;
        else
            carlsenPremio = 55 * X;
        cout << carlsenPremio << endl;
    }
    return 0;
}