
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >>t;
	int i;
	for(i=0;i<t;i++)
	{
	 int n;
	 cin >> n;
	 int p[n];
	 int c[n];
	 int j;
	 for(j=0;j<n;j++)
	 {
	     cin >> p[j] >> c[j];
	 }
	 int play=p[0];
	 int prevplay;
	 int clear=c[0];
	 int prevclear;
	 int flag=0;
	 for(j=0;j<n;j++)
	 {
	     if(c[j]>p[j])
	     {
	         flag = 1;
	         break;
	     }
	 }
	 if(flag==1)
	 {
	     cout << "NO" << endl;
	     continue;
	 }
	 for(j=1;j<n;j++)
	 {
	     prevplay = p[j-1];
	     play = p[j];
	     prevclear = c[j-1];
	     clear = c[j];
	     if(prevclear>clear)
	     {
	         flag=1;
	         break;
	     }
	     if(prevplay>play)
	     {
	         flag = 1;
	         break;
	     }
	 }
	 for(j=0;j<n;j++)
	 {
	     if(p[j-1]==p[j]&&c[j]>c[j-1])
	     {
	         flag=1;
	         break;
	     }
	 }
	 if(flag==1)
	 {
	     cout << "NO" << endl;
	     continue;
	 }
	 else
	 {
	     cout << "YES" << endl;
	 }
	}
}