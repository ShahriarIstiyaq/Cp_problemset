#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cnt = 0;

    cin >> a >> b;

    while (1)
    {
        if (a > b)
            break;

        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}