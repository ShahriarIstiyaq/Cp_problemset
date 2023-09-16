#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n][3]; // problem set. -> a[i][0] = Petya, a[i][1] = Vasya, a[i][2] = Tonya.

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    /*Every row of the array represents how many of them are sure about the problem.*/
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                cnt++;
        }

        if (cnt >= 2)
            ans++;
    }

    cout << ans << endl;
    return 0;
}