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
		string s;
		cin>>s;
		ll length = s.length();
		ll i=0,j=0;
		while(j <= length+1)
		{
			
			if(j == length+1)
			{
				ll tempi = i;//i.like.this.program.very.much
				ll tempj = j-2;
				// if (j == length)
				// {
				// 	/* code */
				// }
				while(tempi<tempj)
				{
					swap(s[tempi],s[tempj]);
					tempi++;
					tempj--;
				}
				//cout<<j<<" ";
				j++;
				i = j;
			}
			else if (s[j]!=' ')
			{
				j++;
			}
			else if(s[j] == ' ')
			{
				//ll temp = i;
				ll tempi = i;
				ll tempj = j-1;
				// if (j == length)
				// {
				// 	/* code */
				// }
				while(tempi<tempj)
				{
					swap(s[tempi],s[tempj]);
					tempi++;
					tempj--;
				}
				//cout<<i<<" "<<j<<" ;";
				j++;
				i = j;
				//j++;
			}
		}
		ll temp1 = 0;
		ll temp2 = length-1;
		while(temp1<temp2)
		{
			swap(s[temp1],s[temp2]);
			temp1++;
			temp2--;
		}
		//cout<<"\n";
		cout<<s<<"\n";

	}

}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	//code
// 	int T;
// 	cin >> T;
// 	string s;
// 	while(T--)
// 	{
// 	    cin >> s;
// 	    string str ="";
// 	    string B = "";
// 	    for(int i = s.size()-1; i >= 0; i--)
// 	    {
// 	        if(s[i] != '.')
// 	        B = s[i]+B;
// 	        else
// 	        {
// 	            str = str+B+".";
// 	            B ="";
// 	        }
// 	    }
// 	    str = str+B;
// 	    cout << str <<endl;
// 	}
// 	return 0;
// }