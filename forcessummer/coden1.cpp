#include <bits/stdc++.h>

using namespace std;

#define ll long long

int ans(int a[],int b[], int n,int m)
{
	if (m == 0)
	{
		return n;
	}
	if (n==0)
	{
		return m;
	}
	if (a[n-1]==b[m-1])
	{
		return ans(a,b,n-1,m-1);
	}
	return min(1 + ans(a,b,n,m-1),ans(a,b,n-1,m));
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	cout<<ans(a,b,n,m)<<"\n";


}