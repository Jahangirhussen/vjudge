#include<iostream>
using namespace std;
int main()
{
    int N,upper=1,lower=1,T;
    cin>>T;
    while(T--){
    cin>>N;
    if(N==1 || N==0)
    {
    }
    else{
    for(int i=1;i<=N;i++)
    {
       upper=upper*i;
    }
    }
/*for(int i=1;i<=N-1;i++)
    {
       lower=lower*i;
    }*/
    cout<<upper<<endl;
    }
}
