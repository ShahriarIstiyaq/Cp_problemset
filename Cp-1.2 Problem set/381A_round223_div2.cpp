#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    /*Thory: every one wants pic the largest number. And sereja will pic largest card from the most left or most right*/
    int s = 0, d = 0, extra = 0;

    int left = 0, right = n - 1;
    int pic_cnt = 0;

    while (left <= right)
    {
        // sereja.
        if (pic_cnt % 2 == 0)
        {
            if (a[left] > a[right])
            {
                s += a[left];
                left++;
            }

            else
            {
                s += a[right];
                right--;
            }
        }

        // dema.
        if (pic_cnt % 2 != 0)
        {
            if (a[left] > a[right])
            {
                d += a[left];
                left++;
            }

            else
            {
                d += a[right];
                right--;
            }
        }

        pic_cnt++;
    }

    cout << s << " " << d << endl;
}

int main()
{

    solve();
    return 0;
}