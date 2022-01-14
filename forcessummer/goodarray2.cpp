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
		int count = 0;
		queue<int> q;
		int n2 = 0;
		int sum = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	q.push(s[i]-'0');
		// 	sum+=s[i]-'0';
		// 	if (sum==q.size())
		// 	{
		// 		count++;
		// 	}

		// 	while(sum>n&&!q.empty())
		// 	{
		// 		sum = sum - q.front();
		// 		q.pop();
		// 	}

		// }
		int i = 0,j = 0;
		int n3 = n;
		while(n2<=n)
		{
			if (i<n)
			{
				q.push(s[i]-'0');
				sum+=s[i]-'0';
				i++;
				j++;
			}
			
			if (sum==q.size())
			{
				count++;
			}

			while(sum>n&&!q.empty())
			{
				sum = sum - q.front();
				q.pop();
				n2++;
			}
			if (j==n3)
			{
				sum = sum - q.front();
				q.pop();
				n2++;
				n3--;
				j--;
			}
		}
		cout<<count<<"\n";

	}

}