#include <bits/stdc++.h>

using namespace std;

#define ll long long

int isprime(ll n)
{   
	if (n == 1)
	{
		return 0;
	}
	int isp = 1;
	 for (ll i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
         isp = 0;
         break;
      }
   }
   return isp;
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
		if (n <= 30)
		{
			cout<<"NO\n";
			continue;
		}
		if (n == 36)
		{
			cout<<"YES\n";
			cout<<"5 "<<"6 "<<"10 "<<"15\n";
			continue;
		}
		if (n == 40)
		{
			cout<<"YES\n";
			cout<<"1 "<<"10 "<<"14 "<<"15\n";
			continue;
		}
		if (n == 44)
		{
			cout<<"YES\n";
			cout<<"5 "<<"10 "<<"14 "<<"15\n";
			continue;
		}
		int a  = 6;
		int b = 10;
		int c  = 14;
		ll ans = n-30;
		cout<<"YES\n";
		cout<<a<<" "<<b<<" "<<c<<" "<<ans<<"\n";

	}

}