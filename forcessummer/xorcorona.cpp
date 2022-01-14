#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	//ll t;
	//cin>>t;
	///while(t--)
	//{
	ll n;
	cin>>n;
	ll ans;

	ll p = 0;
	ll n2 = n;
	while(n2!=1)
	{
		n2=n2/2;
		p++;
	}
	ll ff = pow(2,p)+1;
	if (n==pow(2,p))
	{
		cout<<pow(2,n)-1<<"\n";
		//return;	
	}
	
	else
	{
		//ll x = pow(2,n-1)+1;
		ll ff2 = pow(2,ff-1)+1;
		ll x2 = n-ff;
		//cout<<ff2<<" "<<x2<<"\n";
		ll z;
		int minus = 0;
		if (x2>0)
		{
			if (x2%2==1)
			{
				z = (x2+1);
				minus = 1;
			}
			else
			{
				z = x2;
			}
			ll req = 2;
			while(z>2)
			{
				req=req*2;
				z=z-2;
			}

			//z= pow(2,z);
			//cout<<x<<" "<<z<<"\n";
			if (minus)
			{
				ans = ff2*(pow(2,req)-1);	
			}
			else
			{
				ans = ff2*(pow(2,req)+1);
			}
			cout<<ans<<"\n";
		}
		else
		{
			cout<<ff2<<"\n";
		}
		

	}
	//ll x = p+1;
	//}

}