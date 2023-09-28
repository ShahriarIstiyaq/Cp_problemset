#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;

    for (int i = 0; i < n; i++)
        if (i < n && a[i] != a[i + 1])
            ans++;

    cout << ans;
}

int main()
{

    solve();
    return 0;
}