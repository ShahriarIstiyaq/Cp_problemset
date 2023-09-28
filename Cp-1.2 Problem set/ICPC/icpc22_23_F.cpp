#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define arrayIn(i, n) for (int i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ans cout << ans << endl
#define checkmate return 0
void solve()
{
    int n, a, b, x = 0, y = 0, d = 0;
    cin >> n >> a >> b;

    if (n == 1)
    {
        if (a == b)
        {
            cout << 1 << endl;
            cout << a << ":" << b << endl;
            return;
        }

        else
        {
            cout << 0 << endl;
            cout << a << ":" << b << endl;
            return;
        }
    }

    int a1[n + 1] = {}, b1[n + 1] = {};

    int pos = 1;

    // Making score 1:0
    while (pos <= n)
    {
        if (a > 0) // assigning 1 to all index of a .
        {
            a--;
            a1[pos]++;
            pos++;
        }
        else
            break;
    }

    if (a > 0) // adding rest of the values in first index of a.
        a1[1] += a;

    // making score 0:1
    if (b) //(If b !=0.)
    {
        if (pos == n + 1) // means the position has exceeded the last match
        {
            a1[1]++; // making the a=0 for the the last match and adding it to the first match
            a1[n]--;
            b1[n] = b;
        }

        else // when our Pos is not at the last match.
        {
            while (pos <= n)
            {
                if (b > 0)
                {
                    b--;
                    b1[pos]++;
                    pos++;
                }
                else
                    break;
            }

            if (b > 0) // adding rest of the value of b to the last match to balance match num.
                b1[n] += b;
        }
    }

    for (int i = 1; i <= n; i++)
        if (a1[i] == b1[i])
            d++;

    cout << d << endl; // printing draws.
    for (int i = 1; i <= n; i++)
        cout << a1[i] << ":" << b1[i] << endl;
}

int main()

{
    int t = 1;
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}