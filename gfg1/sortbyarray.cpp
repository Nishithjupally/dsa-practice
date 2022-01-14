#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n1;
	cin>>n1;
	int a1[n1];
	for (int i = 0; i < n1; ++i)
	{
		cin>>a1[i];
	}
	int n2;
	cin>>n2;
	int a2[n2];
	for (int i = 0; i < n2; ++i)
	{
		cin>>a2[i];
	}
	int a3[n1],b3[n1]={0};
	int index = 0;
	for (int i = 0; i < n1; ++i)
	{
		a3[i]=a1[i];
	}
	sort(a3,a3+n1);
	for (int i = 0; i < n2; ++i)
	{
		for (int j = 0; j < n1; ++j)
		{
			if (a3[j]==a2[i])
			{
				a1[index++]=a3[j];
				b3[j]=1;
			}
		}
	}
	for (int i = 0; i < n1; ++i)
	{
		if (!b3[i])
		{
			a1[index++]=a3[i];
		}
	}
	for (int i = 0; i < n1; ++i)
	{
		cout<<a1[i]<<" ";
	}

	cout<<"\n";
	return 0;
}