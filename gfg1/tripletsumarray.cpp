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
	int found = 0;
	sort(a,a+n);
	for (int i = n-1; i > 1; --i)
	{
		int j = 0;
		int k = i-1;
		while(j < k)
		{
			if (a[j]+a[k] == a[i])
			{
				cout<<"Triplets are "<<a[j]<<" "<<a[k]<<" "<<a[i]<<"\n";
				return 0;
			}

			if (a[j]+a[k] < a[i])
			{
				j++;
			}
			else
			{
				k--;
			}

		}

	}
	
}