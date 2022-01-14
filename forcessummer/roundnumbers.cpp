#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll powe(int y,ll x)
{
	ll ans = 1;
	for (ll i = 0; i < x; ++i)
	{
		ans = ans*10;
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
		ll n;
		cin>>n;
		ll count = 0;
		ll temp =n;
		ll zeroes = 0;
		std::vector<ll> v;
		while(temp>=10)
		{
			if (temp%10==0)
			{
				zeroes++;
			}
			count++;
			v.push_back(temp%10);
			temp = temp/10;

			//cout<<
		}
		v.push_back(temp);
		count++;
		if (count-zeroes == 1 || count == 1)
		{
			cout<<"1\n";
			cout<<n<<"\n";
			continue;
		}
		else
		{
			cout<<count-zeroes<<"\n";
			auto i = v.end();
			while(count>=0)
			{
				if (*i!= 0)
				{
					cout<<(*i)*powe(10,count)<<" ";
				}
				//cout<<v[i++]*pow(10,count-1)<<" ";
				if (i == v.begin())
				{
					break;
				}
				count--;
				i--;
			}
		}
		cout<<"\n";
	}

}