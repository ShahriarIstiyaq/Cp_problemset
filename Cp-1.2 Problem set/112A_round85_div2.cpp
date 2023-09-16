#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    // Transforming all characters to lower case.
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int ans = s1.compare(s2); // compare function works like strcmp()

    cout << ans;
}

int main()
{
    solve();
    return 0;
}