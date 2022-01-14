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
	int l=0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i]<0)
		{
			if (a[l]>0)
			{
				int temp = a[i];
				a[i] = a[l];
				a[l] = temp;
				l++;	
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}

	cout<<"\n";
}