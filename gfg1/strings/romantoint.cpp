#include <bits/stdc++.h>

using namespace std;

#define ll long long

int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
    if (r== 'V')
    {
    	return 5000;
    }
  
    return -1; 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll ans = 0;
	while(t--)
	{
		string s;
		cin>>s;
		ll n = s.length();
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int temp1 = value(s[i]);
			if (i < n-1)
			{
				int temp2 = value(s[i+1]);

				if (temp1 >= temp2)
				{
					ans+=temp1;
				}
				else
				{
					ans+=temp2-temp1;
					i++;
				}
			}
			else
			{
				ans+=temp1;
			}

		}
		cout<<ans<<"\n";
	}

}