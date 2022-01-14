#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;

		char a[n][m];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				a[i][j] = 'W'; 
			}
		}
		for (int i = 0; i < n; ++i)
		{
			if (i%2 == 0)
			{
				for (int j = 0; j < m; j=j+2)
				{
					a[i][j] = 'B';
				}
			}
			else
			{
				for (int j = 1; j < m; j=j+2)
				{
					a[i][j] ='B';
				}
			}
			
		}
		if ((n*m % 2) == 0)
		{
			a[n-1][m-1] = 'B';
			a[n-1][m-2] = 'B';
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
	}
}