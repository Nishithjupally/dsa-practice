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
		string s;
		cin>>s;
		ll k;
		cin>>k;
		ll flag = k;

		char a[256] = {0};
		for (int i = 0; i < s.length(); ++i)
		{
			a[s[i]]++;
		}
		while(k>0)
		{
			int max = -1;
			int temp = 0;
			for (int i = 0; i < 256; ++i)
			{
				if (a[i]>max)
				{
					max = a[i];
					temp = i;


				}
			}
			a[temp]--;
			k--;
		}
		int ans = 0;
		for (int i = 0; i < 256; ++i)
		{
			ans+=a[i]*a[i];
		}
		//cout<<s.length()<<" "<<k<<"\n";
		if (s.length()<=flag)
		{
			cout<<"0\n";
		}
		else{
			cout<<ans<<"\n";

		}
   	
	}

}