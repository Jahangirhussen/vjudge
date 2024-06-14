#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n, t;
    cin >> t;
string s;
    while (t--)
    {
        cin>>n;
        for(i=0;i<n;i++    )
        {
            cin>>s[i];
        }

        char get = s[0];

        for ( i = 0; i < n; i++)
        {
            if (s[i] >= get)
            {
                get = s[i];
            }
        }

        cout << static_cast<int>(get) -96<< endl;
    }

    return 0;
}
