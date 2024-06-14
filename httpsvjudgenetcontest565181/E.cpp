#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,new_S;

    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            //nothing here
        }
        else
        {
            new_S=new_S+s[i];
        }
        if(s[i]==' ')
        {
            cout<<new_S;
            new_s=""
        }
    }

    return 0;
}

/// jodi ekta word a 100% big hoy than sob out.
