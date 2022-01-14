#include <bits/stdc++.h>

using namespace std;

#define ll long long  

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		char str[n];
		ll ascii = 97;
		ll total = 0,i = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	if (i <= b)
		// 	{
		// 		char str[i] = 97;
		// 		ascii++;
		// 	}
		// }
		while(total < n)
		{
			str[total] = ascii;
			total++;
			i++;
			ascii++;
			if (i == b)
			{
				ascii = 97;
				i = 0;
			}

		}
		for (int i = 0; i < n; ++i)
		{
			cout<<str[i];
		}
		cout<<"\n";
	}
}