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
		string s1,s2;
		cin>>s1>>s2;
		ll count[256]={0};
		if(s1.length() != s2.length())
		{
			cout<<"NO\n";
			continue;
		}
		else
		{
			for (ll i = 0; i < s1.length(); ++i)
			{
				count[s1[i]]++;
				count[s2[i]]--;
			}
			int flag = 1;
			for (ll i = 0; i < 256; ++i)
			{
				if (count[i])
				{
					cout<<"NO\n";
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				cout<<"YES\n";
			}
		}



	}

}

// map<char,ll> m1,m2;
// 		for (ll i = 0; i < s1.length(); ++i)
// 		{
// 			m1[s1[i]]++;
// 		}
// 		for (ll i = 0; i < s2.length(); ++i)
// 		{
// 			m2[s2[i]]++;
// 		}
// 		ll fag = 0;
// 		if(s1.length() != s2.length())
// 		{
// 			cout<<"NO\n";
// 			continue;
// 		}
// 		//ll fag = 0;
// 		else
// 		{
// 			for (ll i = 0; i < s1.length(); ++i)
// 			{
// 				if (m1[s1[i]]!=m2[s1[i]])
// 				{
// 					cout<<"NO\n";
// 					fag = 1;
// 					break;
// 					//continue;
// 				}

// 			}
// 			if (fag)
// 			{
// 				continue;
// 			}
// 			cout<<"YES\n";

// 		}