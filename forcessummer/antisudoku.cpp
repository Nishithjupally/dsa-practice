#include <bits/stdc++.h>

using namespace std;

#define ll long long  

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char a[9][9];
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 9; ++j)
			{
				cin>>a[i][j];
			}
		}
		char two = '2';
		
		for (int l = 0; l < 9; ++l)
		{
			for (int k = 0; k < 9; ++k)
			{	if (a[l][k] == '1')
				{
				cout<<two;
				}
				else{
				cout<<a[l][k];}
			}
			cout<<"\n";
		}
	}
}