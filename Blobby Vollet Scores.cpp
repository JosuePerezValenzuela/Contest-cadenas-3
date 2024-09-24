#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N;
        string pal;
        cin >> N >> pal;
        int alicePuntos = 0;
        int bobPuntos = 0;
        char server = 'A';
        
        for (char c : pal) {
            if (c == server) {
                if (server == 'A')
                    alicePuntos++;
                else
                    bobPuntos++;
            } else {
                server = (server == 'A') ? 'B' : 'A';
            }
        }
        cout << alicePuntos << " " << bobPuntos << endl;
    }
    return 0;
}