#include <bits/stdc++.h>
using namespace std;
/*This can be done this way also
 */
// Counting distinct charcter using map. This way one can use the distinct char as an index for use.
int distinct_char_count(string str)
{
    map<char, int> count_char;

    int len = str.size();
    for (int i = 0; i < len; i++)
        count_char[str[i]]++;

    return count_char.size(); // Size of map index is the number of distinct characters.
}
void solve()
{
    string s;
    cin >> s;

    int char_cnt = distinct_char_count(s);

    if (char_cnt % 2 == 0)
        cout << "CHAT WITH HER!";

    else
        cout << "IGNORE HIM!";
}

int main()
{
    solve();

    return 0;
}
