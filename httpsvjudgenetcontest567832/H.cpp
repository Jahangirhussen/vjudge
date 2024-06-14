#include<iostream>
using namespace std;
int main()
{
int t,count;
cin>>t;
while(t--)
{
    int n;
    cin >>n;
    count=0;
    while(n--)
    {
        int a ,b;
        cin>>a>>b;
        if(a>b)
            count++;
    }
    cout<<count<<endl;
}
return 0;
}
