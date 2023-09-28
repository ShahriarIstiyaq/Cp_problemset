#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[5][5], row = 0, col = 0, ans = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (a[i][j] == 1)
            {
                row = i, col = j;
            }

    // cout << row << " " << col << endl;

    ans = abs(2 - row) + abs(2 - col);

    cout << ans;
}

int main()
{
    solve();
    return 0;
}