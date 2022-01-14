#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll p1,p2;
		cin>>p1>>p2;
		ll n1,n2;
		ll w1,w2;
		cin>>n1>>n2>>w1>>w2;
		ll sum = 0;
		if (p1<p2)
		{
			ll t =p1;
			p1=p2;
			p2=t;
		}
		if (w1>w2)
		{
			ll t =w1;
			w1=w2;
			w2=t;
			swap(n1,n2);
		}
		//if (w1<w2)
		//{
			//if (p1>=p2)
			//{
				ll temp = p1/w1;
				if (temp>n1)
				{
				//	cout<<
					sum+=n1;
				//	n1=0;
					p1 = p1-n1*w1;
					n1=0;
					//cout<<"h "<<p1<<"\n";
				}
				else
				{
					sum+=temp;
					
					p1 = p1-temp*w1;
					n1-=temp;
				}
				if (n1>0)
				{
					ll temp1 = p2/w1;
					if (temp1>n1)
					{
						sum+=n1;
						//n1=0;
						p2 = p2-n1*w1;
						n1=0;
					}
					else
					{
						sum+=temp1;
						n1-=temp1;
						p2 = p2-temp1*w1;
					}
				}
				ll temp2 = p1/w2;
				if (temp2>n2)
				{
					sum+=n2;
					//n2=0;
					p1 = p1-n2*w2;
					n2=0;
					//cout<<"h "<<p1<<" "<<n2<<"\n";
				}
				else
				{
					sum+=temp2;
					n2-=temp2;
					p1 = p1-temp2*w1;
				}
				if (n2>0)
				{
					ll temp11 = p2/w2;
					if (temp11>n2)
					{
						sum+=n1;
						//n2=0;
						p2 = p2-n2*w2;
						n2=0;
					}
					else
					{
						sum+=temp11;
						n2-=temp11;
						p2 = p2-temp11*w1;
					}
				}
				ll x = p1+p2;
				while(x>=w2 && (n1+n2!=0))
				{
					sum++;
					x-=w2;

				}

			//}
		//}
				cout<<sum<<"\n";
	}

}