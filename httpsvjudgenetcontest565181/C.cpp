
#include<iostream>
using namespace std;
int main()
{
int count_S=0;
    string S;
    cin>>S;
    for(int i=0; i<S.size(); i++)
    {
        if(S[i]=='X')
            count_S ++;
    }
    cout<<count_S<<endl;

}
