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
		cin>>n;
		string s;
		cin>>s;
		int a[n];
		ll b[n] = 0;
		//vector<vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			a[i]=s[i]-'0';
		}
		int count = 0;
		b[0]=a[0];
		for (int i = 1; i < n; ++i)
		{
			b[i]=b[i-1]+a[i];
		}
		
		// for (int i = 0; i < n; ++i)
		// {
		// 	int sum = 0;
		// 	for (int j = i; j < n; ++j)
		// 	{
		// 		sum+=a[j];
		// 		if (sum== j-i+1)
		// 		{
		// 			count++;
		// 		}
		// 	}
		// }
		cout<<count<<"\n";

	}

}