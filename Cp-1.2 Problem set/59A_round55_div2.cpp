#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int len = s.size();

    int lower = 0, upper = 0;
    for (int i = 0; i < len; i++)
    {
        if (islower(s[i]))
            lower++;
        if (isupper(s[i]))
            upper++;
    }

    if (lower >= upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (upper > lower)
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;
}

int main()
{

    solve();
    return 0;
}