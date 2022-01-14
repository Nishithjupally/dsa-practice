#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	//getchar();
	while(t--)
	{
		//string s = " ";
		std::vector<char> v;
		//cin>>s;
		char c;
		while((c=getchar()) && (c!='\n'))
		{
			v.push_back(c);
		}
		std::vector<char> s = v;
		for(auto x:v)
		{
			cout<<x<<" ";
		}
		ll left = 0, right = s.size()-1;
		transform(s.begin(), s.end(), s.begin(), ::tolower); 
		//cout<<s<<endl;
		
		ll flag = 1;
		cout<<"right "<<right<<"\n";
		while(left < right)
		{
			if ((48<=int(s[left])&&int(s[left])<=57) ||(97<=int(s[left])&&int(s[left])<=122))
			{
				// if (s[left]!=s[right])
				// {
				// 	flag = 0;
				// 	cout<<"NO2\n";
				//     cout<<left<<" "<<right<<" \n";
				// 	// cout<<int(s[left])<<" "<<int(s[right])<<" \n";

				// 	break;
				// }
				cout<<"Entered2 "<<s[left]<<endl;
				cout<<left<<" "<<right<<endl;
				cout<<s[left]<<" "<<s[right]<<endl;
				if ((48<=int(s[right])&&int(s[right])<=57) ||(97<=int(s[right])&&int(s[right])<=122))
				{
					if (s[left]!=s[right])
					{
						flag = 0;
						cout<<left<<" "<<right<<" \n";
						cout<<"NO2\n";
						break;
					}
					else
					{
						left++;
						right--;
						cout<<"Left1 "<<s[left]<<"\n";
					}
				}
				else
				{
					cout<<"lost \n";
					right--;
				}

			}
			if ((48<=int(s[right])&&int(s[right])<=57) ||(97<=int(s[right])&&int(s[right])<=122))
			{
				// if (s[left]!=s[right])
				// {
				// 	flag = 0;
				// 	//cout<<left<<" "<<right<<" \n";
				// 	cout<<"NO\n";
				// 	break;
				// }
				cout<<"Entered "<<s[right]<<endl;
				if ((48<=int(s[left])&&int(s[left])<=57) ||(97<=int(s[left])&&int(s[left])<=122))
				{
					if (s[left]!=s[right])
					{
						flag = 0;
						cout<<left<<" "<<right<<" \n";
						cout<<"NO\n";
						break;
					}
					else
					{
						left++;
						right--;
						cout<<"Left2 "<<s[left]<<"\n";
					}
				}
				else
				{
					left++;
					cout<<"Inc left";
					cout<<s[left]<<" "<<s[right]<<endl;
				}
				
			}

		}
		if (flag)
		{
			cout<<"YES\n";
		}

	}

}