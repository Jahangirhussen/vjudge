#include<bits\stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    N=N+1;
    while(1)
    {
        if(N[0]==N[1] || N[0]==N[2] || N[0]==N[3] || N[1]==N[2] || N[1]==N[3] || N[2]==N[3] )
        {

            N++;


        }
        else
        {
            cout<<N<<endl;
            break;
        }
    }
