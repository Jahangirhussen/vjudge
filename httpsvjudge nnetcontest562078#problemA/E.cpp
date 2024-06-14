
#include<iostream>
using namespace std;
    int main()
    {
       int T;
       string n;
cin>>T;
while(T--)
{


        cin>>n;
        if(n.size()<=10)
            cout<<n<<endl;
        else
            cout<<n[0]<<n.size()-2<<n[n.size()-1]<<endl;


    }
    }
