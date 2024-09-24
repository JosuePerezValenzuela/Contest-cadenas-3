#include <bits/stdc++.h>

using namespace std;

string sol(vector<string>& strs) {
    int tam = strs.size();
    if (tam == 0)
        return "";
    int minTam = strs[0].length();
    for (int i = 1; i < tam; i++) {
        minTam = min(minTam, (int)strs[i].length());
    }
    for (int len = minTam; len > 0; len--) {
        for (int i = 0; i <= strs[0].length() - len; i++) {
            string sub = strs[0].substr(i, len);
            bool aux = true;
            for (int j = 1; j < tam; j++) {
                if (strs[j].find(sub) == string::npos) {
                    aux = false;
                    break;
                }
            }
            if (aux)
                return sub;
        }
    }
    return "";
}
int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    string longestSub = sol(strs);
    cout << longestSub.length() << endl;
    return 0;
}