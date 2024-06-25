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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x = 0;
    set<int> s;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !s.count(v[j]))
        {
            s.insert(v[j]);
            x = max(x, j - i + 1);
            j++;
        }
        while (j < n && s.count(v[j]))

        {
            s.erase(v[i]);
            i++;
        }
    }
    cout << x << endl;
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