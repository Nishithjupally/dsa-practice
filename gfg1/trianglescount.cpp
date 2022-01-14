#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			int k = i+2;
			while(k<n && a[i]+a[j]>a[k])
			{
				k++;
			}
			if (k>j)
			{
				count += k-j-1;
			}
		}
	}
	cout<<"Total possible triangle is "<<count<<"\n";
	return 0;
}