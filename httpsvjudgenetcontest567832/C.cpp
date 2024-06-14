#include<iostream>
using namespace std;
int main()
{
    int T,n,x,k,p;
    cin>>T;
    while(T--)
    {
        cin>>n>>x>>k>>p;

        if(k==0)
            cout<<p<<endl;
        else
        {
            if(n==k)
                p=p+20;
            while(k--)
            {
                if(x>0)
                {
                    p=p+10;
                    x--;
                }
                else if(n>0)
                {
                    p=p+5;
                    n--;
                }

            }
            cout<<p<<endl;
        }

    }

    return 0;
}
