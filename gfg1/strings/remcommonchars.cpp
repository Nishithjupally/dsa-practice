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
		int n1 = s1.length(),n2=s2.length();
		char a1[256] = {0};
		char a2[256] = {0};
		for (int i = 0; i < n1; ++i)
		{
			a1[s1[i]]= 1;
		}
		for (int i = 0; i < n2; ++i)
		{
			a2[s2[i]]= 1;
		}
		std::vector<char> v;
		for (int i = 0; i < n1; ++i)
		{
			if (a1[s1[i]] && a2[s1[i]])
			{
				/* code */
			}
			else
			{
				v.push_back(s1[i]);
			}
		}
		for (int i = 0; i < n2; ++i)
		{
			if (a1[s2[i]] && a2[s2[i]])
			{
				/* code */
			}
			else
			{
				v.push_back(s2[i]);
			}
		}
		if (v.size() == 0)
		{
			cout<<"-1\n";
		}
		else
		{
			for(auto x : v)
			{
				cout<<x;
			}
		}
		
		cout<<"\n";
	}

}