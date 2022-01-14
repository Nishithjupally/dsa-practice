#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll r,g,b,w;
		cin>>r>>g>>b>>w;
		//ll sum = r+g+b+w;
		ll count = 0;
		if (r*g*w*b != 0)
		{
			if (r%2==0)
			{
				count++;
			}
			if (g%2==0)
			{
				count++;
			}
			if (b%2==0)
			{
				count++;
			}
			if (w%2==0)
			{
				count++;
			}
			if (count==2)
			{
				cout<<"No\n";
				continue;
			}
			else
			{
				cout<<"Yes\n";
				continue;
			}
		}
		else
		{
			if (w==0)
			{
				if (r%2==0)
				{
					count++;
				}
				if (g%2==0)
				{
					count++;
				}
				if (b%2==0)
				{
					count++;
				}
				if (count==1)
				{
					cout<<"No\n";
					continue;
				}
				else
				{
					cout<<"Yes\n";
					continue;
				}
			}
			else
			{
				if (r%2==0)
				{
					count++;
				}
				if (g%2==0)
				{
					count++;
				}
				if (b%2==0)
				{
					count++;
				}
				if (w%2 == 0)
				{
					count++;
				}
				if (count==3 ||count==4)
				{
					cout<<"Yes\n";
					continue;
				}
				else
				{
					cout<<"No\n";
					continue;
				}
			}
		}
		
	}

}