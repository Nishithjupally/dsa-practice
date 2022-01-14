#include <iostream>

using namespace std;

int main()
{
	int n,sum,sum1=0;
	cin>>n>>sum;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int found = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			sum1 = sum1 + a[j];
			if (sum1 == sum)
			{
				cout<<"Sum found between indices "<<i<<" and "<<j;
				break;
			}
		}
		if (sum1 == sum)
		{
			break;
		}
		sum1 = 0;
	}
}