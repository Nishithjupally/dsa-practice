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
		string s;
		cin>>s;
		ll n = s.length();
		int str[n];
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == '0'||s[i] == '1')
			{
				str[i] = s[i]-'0';
			}
		}
		for (int i = 1; i < n-1; ++i)
		{
			if (s[i] == 'A')
			{
				str[i+1] = str[i-1]&&str[i+1];
			}
			if (s[i] == 'B')
			{
				str[i+1] = str[i-1]||str[i+1];
			}
			if (s[i] == 'C')
			{
				str[i+1] = str[i-1]^str[i+1];
			}
		}
		cout<<str[n-1]<<"\n";
	}

}