#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v;

    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }

    while (q--)
    {
        long long int a, b;
        cin >> a >> b;

        set<long long int> kaw;
        for (long long int j = a - 1; j < b; j++)
        {
            kaw.insert(v[j]);
        }
        cout << kaw.size() << endl;
    }

    return 0;
}
