//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    int n;
    cin >> n;
    int ans;
    if (n % 2 == 0)
    {
        ans = n / 2;
        cout << ans << nl;
        for (int i = 0; i < ans; i++)
        {
            cout << 2 << " ";
        }
        cout << '\n';
    }
    else
    {
        ans = n / 2;
        cout << ans << nl;
        for (int i = 0; i < ans - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << nl;
    }
}
int main()
{
    fast;
    ll test_case = 1;
    // cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}