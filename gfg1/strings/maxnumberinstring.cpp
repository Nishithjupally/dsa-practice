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
		int max1 = -1,num= 0;
		//cout<<s.length()<<"\n";
		//cout<<s[0]<<" "<<s[s.length()-1]<<"\n";
		for (int i = 0; i <= s.length(); ++i)
		{
			if (s[i]>='0'&&s[i]<='9')
			{
				//cout<<s[i]<<" ";
				num = num*10+(s[i]-'0');
			}
			else
			{
			    //cout<<num<<" "<<max1<<"\n";
				max1 = max(num,max1);
				num = 0;

			}
		}
		cout<<max1<<"\n";
	}

}