#include<bits/stdc++.h>
using namespace std;
int main()
{
int q,n,a,b,x;
cin>>n>>q;
vector<int>v;

for(int i =1; i<=n ; i++)
{
	cin>>x;
	v.push_back(x);
	}

while(q--)
{
	cin>>a>>b;
	set<int>kaw;
	for(int j=a; j<=b; j++)
    {
        kaw.insert(v[j]);
    }
    cout<<kaw.size()<<endl;
}

	return 0;
}
