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
		string s,sol,temp;
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		cin>>n;
		while(ss>>temp)
		{
			sol = sol+f+"%20";
		}
		cout<<sol.substr(0,sol.length()-3)<<"\n";
		sol.clear();
		
	}

}