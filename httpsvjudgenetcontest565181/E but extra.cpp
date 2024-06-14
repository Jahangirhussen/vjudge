#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(cin >> s)
    {
        int cnt = 1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                //nothing here
            }
            else
            {
                cnt = 0;
            }
        }
        if(cnt == 0)
            cout << s << " ";

    }

    return 0;
}
