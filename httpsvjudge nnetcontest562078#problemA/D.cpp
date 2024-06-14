#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int Mi=min(a,b);
        Mi=min(Mi,c);
        int Mx=max(a,b);
          Mx=max(Mx,c);

        cout<<a+b+c-Mx-Mi<<endl;

    }

}

