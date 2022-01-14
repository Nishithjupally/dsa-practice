/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */


bool compare(Interval a, Interval b)
{
	return (a.start < b.start);
}

vector<Interval> merge(vector<Interval> &A, int n)
{
	std::vector<Interval> v;
	if (n<=0)
	{
		return v;
	}
	stack<Interval> s;
	sort(A.begin(),A.end(),compare);
	s.push(A[0]);
	for (int i = 1; i < n; ++i)
	{
		Interval top = s.top();
		if (top.end <A[i].start)
		{
			s.push(A[i]);
		}
		else if(top.end < A[i].end)
		{
			top.end = A[i].end;
			s.pop();
			s.push(top);
		}
	}
	while(!s.empty())
	{
		Interval t = s.top();
		v.push_back(t);
		s.pop();
	}
	sort(v.begin(),v.end(),compare);
	return v;
}

// vector<Interval> Solution::merge(vector<Interval> &A) {
//     //codes/ for more details
//     //A.push_back(newInterval);
//     return merge(A,A.size());
//     //return v;

// }

vector<Interval> Solution::merge(vector<Interval> &A) {

	return merge(A,A.size());
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
