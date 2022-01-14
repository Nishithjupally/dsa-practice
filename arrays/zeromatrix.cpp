

void Solution::setZeroes(vector<vector<int> > &A) 
{
	int row = 0;
	int col = 0;
	int m = A.size();
	int n = A[0].size();
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i==0 && A[i][j]==0)
			{
				row = 1;			
			}
			if (j==0 && A[i][j]==0)
			{
				col = 1;			
			}
			if (A[i][j]==0)
			{
				A[0][j] = 0;
				A[i][0] = 0;
			}
		}
	}
	for (int i = 1; i < m; i++) 
	{ 
        for (int j = 1; j < n; j++) 
        { 
  
            if (A[0][j] == 0 || A[i][0] == 0) 
            { 
                A[i][j] = 0; 
            } 
         }   
      
    
    }
    if (row == 1)
    {
    	for (int i = 0; i < n; ++i)
    	{
    		A[0][i] = 0;
    	}
    }
    if (col == 1)
    {
    	for (int i = 0; i < m; ++i)
    	{
    		A[i][0] = 0;
    	}
    }
    //return A;
    // for (int i = 0; i < m; ++i)
    // {
    // 	for (int j = 0; j < n; ++j)
    // 	{
    // 		cout<<A[i][j]<<" ";
    // 	}
    // 	cout<<"\n";
    // }
 }   
