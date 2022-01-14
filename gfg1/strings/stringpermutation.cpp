#include <bits/stdc++.h>

using namespace std;

#define ll long long

void permute(string a,ll l, ll r)
{
	if(l == r)
	{
		cout<<a<<"\n";
	}
	else
	{
		for (ll i = l; i < r+1; ++i)
		{
			swap(a[l],a[i]);
			permute(a,l+1,r);
			swap(a[l],a[i]);
		}
	}
}

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
		permute(s,0,s.length()-1);
	}

}