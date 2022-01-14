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
		ll x1,x2,y1,y2,z1,z2;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		ll n = x1+y1+z1;
		ll sum = 0;
		if (z1 > y2)
		{
			sum+=2*y2;
			z1-=y2;
			y2=0;

		}
		else
		{
			sum+=2*z1;
			y2-=z1;
			z1=0;
		}
		if (z2 > x1)
		{
			//sum+=2*y2;
			z2-=x1;
			x1=0;

		}
		else
		{
			//sum+=2*z1;
			x1-=z2;
			z2=0;
		}
		if (z1 > z2)
		{
			//sum+=2*y2;
			z1-=z2;
			z2=0;

		}
		else
		{
			//sum+=2*z1;
			z2-=z1;
			z1=0;
		}
		if (z2 > y1 )
		{
			sum = sum - 2*y1;
		}
		else
			sum = sum - 2*z2;

		cout<<sum<<"\n";



	}

}