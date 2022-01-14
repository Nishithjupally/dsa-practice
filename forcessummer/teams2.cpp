#include <bits/stdc++.h>

using namespace std;

#define ll long long 



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		map <ll,ll> m,n1;
		ll count2=0; 
		ll n,size,temp,flag=0;
		cin>>n;
		temp = n/2;
		ll a[n],b[2*n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>a[i];
			m[a[i]]++;
			if (m[a[i]]>1 && n1[a[i]]==0)
			{
				count2++;
				n1[a[i]]=1;
				
			}
		}
		ll unique = 0;

		for (ll i = 0; i < n; ++i)
		{
			if (m[a[i]] == 1)
			{
				unique++;
			}
		}
		unique+=count2;
		//cout<<unique<<" unq\n";
		for (ll i = temp; i >= 0; --i)
		{
			for (ll j = 0; j < n; ++j)
			{
				//cout<<m[a[j]]<<" "; 
				if (m[a[j]]>=i)
				{
					//cout<<m[a[j]]<<" ma\n";
					if ((unique-1 >= i)||(unique>=i && m[a[j]]>i) )
					{
						cout<<i<<"\n";
						flag = 1;
						break;
						//flag = 1;
					}
				}
			}
			if(flag)
			{
				break;
			}
		}


	}
}