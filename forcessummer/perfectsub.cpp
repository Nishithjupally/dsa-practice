#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t=1;
	//cin>>t;
	//while(t--)
	//{
		int n,x1;
		cin>>n>>x1;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int x = 0;
		int y = pow(2,n)-1;
		std::vector<int> v;
		while(x<=y)
		{
			ll sum = 0;
			for (int i = n-1; i >=0; --i)
			{
				if ((x&(1<<i))!=0)
				{
					///cout<<1;
					sum+=a[i];
					v.push_back(a[i]);
				}
				//else				//cout<<0
				
			}
			if (sum==x1)
				{
					for(auto x2 = 0;x2<v.size();x2++)
					{
						cout<<v[x2]<< " ";
					}
					cout<<"\n";
				}
				v.clear();
			x++;
			//cout<<"\n";
		}
	//}

}