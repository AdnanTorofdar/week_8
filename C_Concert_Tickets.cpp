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
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;
        h.insert(price);
    }

    for (int i = 0; i < m; i++)
    {
        int nprice;
        cin >> nprice;

        auto it = h.upper_bound(nprice);
        if (it == h.begin())
        {

            cout << -1 << '\n';
        }
        else
        {
            cout << *(--it) << '\n';
            h.erase(it);
        }
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