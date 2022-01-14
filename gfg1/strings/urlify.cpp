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
		ll n;
		std::vector<char> v;
		int a[1000]={0};
		//cin>>n;
		char c;
		int p = 0;
		int j = 0;
		while((c=getchar()) && (c!='\n'))
		{
			v.push_back(c);
			if (c == ' ')
			{
				a[j] = 1;
			}
			j++;
		}
		cin>>n;
		int min = -1;
		int max = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[i]==0)
			{
				if (min == -1)
				{
					min = i;
				}
				//min = i;
				max = i;
			}
		
		}
		std::vector<char> v1;
		for (int i = min; i <=max; ++i)
		{
			if (a[i]==1)
			{
				v1.push_back('%');
				v1.push_back('2');
				v1.push_back('0');
			}
			else
			{
				v1.push_back(v[i]);
			}
		}
		for(auto x:v1)
		{
			cout<<x;
		}
		cout<<"\n";
	}

}