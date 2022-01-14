#include <bits/stdc++.h>

using namespace std;

#define ll long long  

int main()
{
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int n,x,count=0,sum=0,ans=0;
		cin>>n>>x;
		long long int a[n];
		for (long long int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<ll>());
		for (ll i = 0; i < n; ++i)
		{
		    //count++;
			if (a[i]<= x)
			{
				count = i;
				break;
			}
		}
		//cout<<count<<" ";
		//ll sum = 0
		for (int i = 0; i < count; ++i)
		{
			sum = sum + a[i] - x;
			a[i]=x;
		}
	//	cout<<sum<<" ";
		while(sum>0)
		{
			if (x-a[count] < sum)
			{

				ll int temp2 = (x-a[count]);
				a[count] = a[count] + (x-a[count]);
				//cout<<"sdsd "<<(x-a[count])<<"dsc\n";
				sum = sum - temp2;
			//	cout<<"hh"<<sum<<" \n";
			}
			else
			{
				a[count] += sum;
				//cout<<"ff \n";
				//cout<<sum<<" \n";
				sum = 0;
			}
			if (count == n-1)
			{
				if (sum > 0)
				{
					sum = 0;
				}
			}
			count++;
		}
		for (ll i = 0; i < n; ++i)
				{
					if (a[i]>=x)
					{
						ans++;
					}
				}	
				// cout<<"\n";
				// for (int i = 0; i < n; ++i)
				// 	{
				// 		cout<<a[i]<<" ";
				// 	}	
				 cout<<ans<<"\n";
	}
}
