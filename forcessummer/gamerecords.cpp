#include <iostream>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int p[n],c[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i]>>c[i];
		}
		int flag = 1;
		for (int i = 0; i < n-1; ++i)
		{
			if (p[i+1]<p[i] || c[i+1]<c[i] || p[i]<c[i] ||(p[i+1]-p[i])<(c[i+1]-c[i]))
			{
				flag = 0;
				break;
			}
			else if(p[i+1]<=p[i] && c[i+1]>c[i])
			{
				flag = 0;
				break;
			}
			if (p[n-1]<c[n-1])
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			cout<<"YES\n";
			//continue;
		}
		else
		{
			cout<<"NO\n";
		}
	}
}