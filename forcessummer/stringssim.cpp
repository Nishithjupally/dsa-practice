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
		string s,s1;
		cin>>s;
		for (int i = 0; i < 2*n-1; ++i)
		{
			string temp(1,s[i]);
			s1 = s1 + temp;
			i++;
		}
		cout<<s1<<"\n";
	}
	return 0;

}