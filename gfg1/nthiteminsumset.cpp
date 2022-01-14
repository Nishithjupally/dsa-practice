#include <bits/stdc++.h>

using namespace std;

map<int,int> m;

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
	int n4;
	cin>>n4;
	int n3 = n1*n2,index=0;
	int a3[n3];
	
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < n2; ++j)
		{
			if (m[a1[i]+a2[j]] == 0)
			{
				a3[index++]=a1[i]+a2[j];
				m[a1[i]+a2[j]]++;
				//cout<<a1[i]+a2[j]<<" ";
			}
		}
	}
	//cout<<endl;
	sort(a3,a3+index);
	cout<<a3[n4-1]<<"\n";

	// for (int i = 0; i < n1; ++i)
	// {
	// 	cout<<a1[i]<<" ";
	// }

	cout<<"\n";
	return 0;
}