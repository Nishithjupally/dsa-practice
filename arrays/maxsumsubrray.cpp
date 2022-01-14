vector<int> Solution::maxset(vector<int> &A) 
{
	long int positive = 0;
	long int ans = -1,sum = 0;
	long int start = 0,end = 0,end2=0,start2=0;
	for (long int i = 0; i < A.size(); ++i)
	{
		//cout<<A[i]<<" "<<positive<<"\n";
		if (A[i]>0 && !positive)
		{
		   // cout<<A[i]<<"\n";
		    sum = 0;
			positive = 1;
			//sum =A[i];
			start = i;
			end = i-1;
		}

		if (positive)
		{
			if (A[i]>0 )
			{
			   // cout<<A[i]<<" ";
				sum = sum + A[i];
				end++;
			}
			else
			{
			    //cout<<A[i]<<"\n";
				positive = 0;
				if ((sum > ans) || ((sum == ans)&&(end2-start2)>(end-start)))
				{
				   // cout<<"SUM "<<sum<<"\n";
					ans = sum;
					end2 = end;
					start2 = start;
				}
				sum = 0;
				end = 0;

			}
		}
		
		

	}

	if ((A[A.size()-1]>0) && ((sum > ans) || ((sum == ans)&&(end2-start2)<(end-start))))
	{
	   
		ans = sum;
		end2 = end;
		start2 = start;
	}

	std::vector<int> v;
	for (long int i = start2; i <= end2; ++i)
	{
		v.push_back(A[i]);
	}
	return v;
}
