int firstdigit(int x)
{
	int ans = 0,ans1=0;
	int temp = x;
	if (temp<10)
	{
		return temp;
	}
	else
	{
		while(temp>=10)
		{
			ans++;
			temp = temp/10;
		}
		ans1 = x/(pow(10,ans));
		return ans1;
	}
}

string Solution::largestNumber(const vector<int> &A) 
{
	int c[A.size()]={0};
	int n =A.size();
	string s = "";
	for (int i = 0; i < n; ++i)
	{
		c[i] = firstdigit(A[i]);
	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<c[i]<<" ";
// 	}
// 	cout<<"\n";
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int max = -1;
	    int maxindex = -1;
		for (int j = 0; j < n; ++j)
		{
			if (c[j]>max)
			{
			   // cout<<"YES \n";
				max = c[j];
				maxindex = j;
				
			}
			else if(c[j]==max)
			{
				//  cout<<"YES3\n";
				//  cout<<c[j]<<" "<<max<<" \n";
				if (A[j]%10 > max%10)
				{
				   // cout<<"YES3\n";
					if (A[j]>=100 && A[j]>A[maxindex])
					{
						max = c[j];
					    maxindex = j;
					}
					if (A[j]<100)
					{
					    //cout<<"YES2\n";
						max = c[j];
					    maxindex = j;
					}
				}
				else
				{
					if (A[j]>=100 && A[j]>A[maxindex] && A[maxindex]>=100)
					{
						max = c[j];
					    maxindex = j;
					}
				}
			}
			
		}
		s+= to_string(A[maxindex]);
		c[maxindex] = -1;


		//count++;
	}
	if (s[0] == '0')
	{
		string s2 = "0";
		return s2;
	}
	return s;
}




class Solution {
    public:
        static bool compareNum(string a, string b) {
            return a + b > b + a;
        }

        string largestNumber(const vector<int> &num) {
            string result;
            vector<string> str;
            for (int i = 0; i < num.size(); i++) {
                str.push_back(to_string(num[i]));
            }
            sort(str.begin(), str.end(), compareNum);
            for (int i = 0; i < str.size(); i++) {
                result += str[i];
            }

            int pos = 0;
            while (result[pos] == '0' && pos + 1 < result.size()) pos++; 
            return result.substr(pos);
        }
};

