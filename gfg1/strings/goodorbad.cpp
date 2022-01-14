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
		ll v=0,c=0;
		ll flag = 1;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				c = 0;
				v++;
				if (v>5)
				{
					cout<<"0\n";
					flag = 0;
					break;
				}

			}
			else if(s[i]=='?')
			{
				v++;
				c++;
				if (v>5 || c>3)
				{
					cout<<"0\n";
					flag = 0;
					break;
				}
			}
			else
			{
				v = 0;
				c++;
				if (c>3)
				{
					cout<<"0\n";
					flag = 0;
					break;
				}

			}
		}
		if (flag)
		{
			cout<<"1\n";
		}
	}

}