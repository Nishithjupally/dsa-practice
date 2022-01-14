#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll distances = 0;

void search2(vector<int> adjacency[],int p,int visited[],int distance[]) //to print
	{
		visited[p] = 1;
		//cout<<p<<" ";
		
		for (auto i = adjacency[p].begin(); i != adjacency[p].end();++i)
		{
			//distances = 0;
			//distances[p]++;
			if (!visited[*i])
			{
				// cout<<"In p "<<p+1<<" next "<<*i+1<<"  \n";
				// cout<<"p dis "<<distance[p]<<" \n";
				distance[*i]= distance[p]+1;
				//distances++;
				search2(adjacency,*i,visited,distance);
			}
			//distances = 0;
		}
	}

int main()
{
	ll n,k;
	cin>>n>>k;
	left = n-k;
	vector<int> adjacency[n];
	//cout<<"ff";

	for (ll i = 0; i < n-1; ++i)
	{
		ll u,v;
		cin>>u>>v;
		adjacency[u-1].push_back(v-1);
	    adjacency[v-1].push_back(u-1);
	}
	//cout<<"ff";
	int visited[n]={0},distance[n]={0};
	//visited[0] = 1;
	//ll distances = 0;
	search2(adjacency,0,visited,distance);

	for (int i = 0; i < n; ++i)
	{
		cout<<distance[i]<<" ";
	}
	cout<<"\n";

	



}
