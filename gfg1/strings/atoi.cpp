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
		int n = s.length(),ans=0;
		for (int i = 0; i < s.length(); ++i)
		{
			ans += pow(10,i)*(s[n-i-1]-'0');
		}
		cout<<ans<<endl;
	}

}