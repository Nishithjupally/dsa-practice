long int mod(string t, int N) 
{ 
    long int r = 0; 
    for (long int i = 0; i < t.length(); i++) 
    { 
        r = r * 10 + (t[i] - '0'); 
        r %= N; 
    } 
    return r; 
} 

string Solution::multiple(int A) {
	if (A==1)
	{
		return "1";
	}
	if (A==0)
	{
		return "0";
	}
	queue<string> q;
	set<int> visit;
	string t = "1";
	q.push(t);
	while(!q.empty())
	{
		t = q.front();
		q.pop();
		long int rem = mod(t,A);
		if (rem == 0)
		{
			return t;
		}
		else if(visit.find(rem)==visit.end())
		{
			visit.insert(rem);
			q.push(t + "0"); 
            q.push(t + "1");
		}
	}
}
