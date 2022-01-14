#include <iostream>

using namespace std;

int check(int a[],int n, int sum2)
{
	int cur_sum = a[0];
	int start = 0;
	for (int i = 0; i < n; ++i)
	{
		while(cur_sum > sum2 && start < i)
		{
			cur_sum = cur_sum - a[start];
			start++;
		} 
		if (cur_sum == sum2)
		{
			cout<<"Sum found between indices "<<start<<" and "<<i<<endl;
			break;
		}
		if (i+1 < n)
		 {
		cur_sum = cur_sum + a[i+1];
		}
	}
	
}


int main()
{
	int n,sum,sum1=0;
	cin>>n>>sum;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	check(a,n,sum);
}