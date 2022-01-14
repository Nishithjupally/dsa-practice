#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		int p = 1;
		long long int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		for (int i = 0; i < n; ++i)
		{
			int flag = 0;
			if (a[i] != b[i])
			{
				if (a[i] > b[i])
				{
					for (int j = 0; j < i; ++j)
					{
						if (a[j] == -1)
						{
							flag = 1;
							break;
						}
					}
				}

				if (a[i] < b[i])
				{
					for (int j = 0; j < i; ++j)
					{
						if (a[j] == 1)
						{
							flag = 1;
							break;
						}
					}
				}
				if (!flag)
				{
					p = 0;
				//	cout<<i;
					break;
				}
				
			}
			if (p == 0)
			{
				break;
			}
		}
		if (p)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}