#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll mp = 1000000007;

std::vector<ll> val;

ll dfs(ll u, ll p,vector<vector<ll>> &adj, ll n)
{
	ll ans = 1;
	for(auto x:adj[u])
	{
		if (x!=p)
		{
			ll nt = dfs(x,u,adj,n);
			val.push_back(nt*(n-nt)%mp);
			ans+=nt;
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		val.clear();
		ll n;
		cin>>n;
		vector<vector<ll>> adj(n);
		for (int i = 0; i < n-1; ++i)
		{
			ll u,v;
			cin>>u>>v;
			u--;
			v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(0,-1,adj,n);
		sort(val.begin(),val.end());
		ll m;
		cin>>m;
	//	cout<<n<<" "<<m<<"\n";
		std::vector<ll> v;
		for (int i = 0; i < m; ++i)
		{
			ll tem;
			cin>>tem;
			v.push_back(tem%mp);
		}
		if (m < n-1)
		{
			ll w = n-m-1;
			while(w--)
			{
				v.push_back(1);
			}
		}
	//	sort(v.begin(),v.end(),greater<ll>());
		// for (int i = m; i <= n-1; ++i)
		// {
		// 	v.push_back(1);
		// }
		sort(v.begin(),v.end());
		// for (int i = 0; i < n-1; ++i)
		// {
		// 	cout<<val[i]<<" ";
		// }
		// cout<<endl;
		// for (int i = 0; i < n-1; ++i)
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;
		
		ll f = 0;
		if (n-1<m)
		{
			//cout<<"gg1\n";
			ll x = m-n-1;
			for (int i = 0; i < n-2; ++i)
			{
				f = ((f%mp)+((v[i]%mp)*(val[i]%mp))%mp)%mp;
			}
			ll f2 = 1;
			for (int i = n-1; i < m; ++i)
			{
				f2 = (f2*(v[i]%mp))%mp;
			}
			f = (f%mp+(f2*(val[n-1]%mp))%mp)%mp;

		}
		else
		{
			//cout<<"gg2\n";
			for (int i = 0; i < v.size(); ++i)
			{
				f = ((f%mp)+((v[i]%mp)*(val[i]%mp))%mp)%mp;
			}
			
		}
		cout<<f<<"\n";
	}

}