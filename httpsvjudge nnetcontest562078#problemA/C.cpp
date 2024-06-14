
#include<iostream>
using namespace std;
    int main()
    {
       int T,yes=0;
       string p;

        cin>>p;
        for(int i=0; i<p.size();i++)
        {
            if(p[i]>=33 && p[i]<=126)
              yes++;
        }
if(yes==p.size())
   cout<<"YES"<<endl;
   else
    cout<<"NO\n";


    }
