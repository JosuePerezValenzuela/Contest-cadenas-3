#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef unsigned long long ull;
const ull P = 31;
const ull MOD = 1e9 + 9;

void compute_hashes(const string &s, vector<ull> &hash, vector<ull> &power) {
    int n = s.size();
    hash.resize(n + 1, 0);
    power.resize(n + 1, 1);

    for (int i = 0; i < n; ++i) {
        hash[i + 1] = (hash[i] * P + (s[i] - 'a' + 1)) % MOD;
        power[i + 1] = (power[i] * P) % MOD;
    }
}

ull get_hash(const vector<ull> &hash, const vector<ull> &power, int L, int R) {
    return (hash[R + 1] - hash[L] * power[R - L + 1] % MOD + MOD) % MOD;
}

int main() {
    string s;
    cin >> s;

    int q;
    cin >> q;

    vector<ull> hash, power;
    compute_hashes(s, hash, power);

    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << get_hash(hash, power, L, R) << '\n';
    }

    return 0;
}
