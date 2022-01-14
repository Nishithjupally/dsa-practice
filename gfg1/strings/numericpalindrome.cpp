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
		ll left = 0, right = s.length()-1;
		transform(s.begin(), s.end(), s.begin(), ::tolower); 
		//cout<<s<<endl;
		
		ll flag = 1;
		while(left < right)
		{
			if ((48<=int(s[left])&&int(s[left])<=57) ||(97<=int(s[left])&&int(s[left])<=122))
			{
				if (s[left]!=s[right])
				{
					flag = 0;
					cout<<"NO\n";
					// cout<<left<<" "<<right<<" \n";
					// cout<<int(s[left])<<" "<<int(s[right])<<" \n";

					break;
				}
			}
			if ((48<=int(s[right])&&int(s[right])<=57) ||(97<=int(s[right])&&int(s[right])<=122))
			{
				if (s[left]!=s[right])
				{
					flag = 0;
					//cout<<left<<" "<<right<<" \n";
					cout<<"NO\n";
					break;
				}
			}
			left++;
			right--;
		}
		if (flag)
		{
			cout<<"YES\n";
		}

	}

}