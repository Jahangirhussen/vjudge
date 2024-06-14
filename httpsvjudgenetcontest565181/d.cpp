
#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;

        if(X%3==0)
            cout<<X/3<<" "<<X/3<<" "<<X/3<<endl;
        else
        {
            cout<<X/3<<" "<<X/3<<" "<<(X/3)+(X%3)<<endl;
        }

}
