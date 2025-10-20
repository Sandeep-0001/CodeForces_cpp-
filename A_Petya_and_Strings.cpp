#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int ans=0;
    for (int i = 0; i < s1.size(); i++) {
        if (tolower(s1[i]) < tolower(s2[i])) {
            ans= -1;
            break;
        } else if (tolower(s1[i]) > tolower(s2[i])) {
            ans= 1;
            break;
        }
    }
    cout << ans;
    return 0;
}
