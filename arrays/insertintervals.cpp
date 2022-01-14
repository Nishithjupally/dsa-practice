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

vector<Interval> merge(vector<Interval> &intervals, int n)
{
	std::vector<Interval> v;
	if (n<=0)
	{
		return v;
	}
	stack<Interval> s;
	sort(intervals.begin(),intervals.end(),compare);
	s.push(intervals[0]);
	for (int i = 1; i < n; ++i)
	{
		Interval top = s.top();
		if (top.end <intervals[i].start)
		{
			s.push(intervals[i]);
		}
		else if(top.end < intervals[i].end)
		{
			top.end = intervals[i].end;
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

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    //codes/ for more details
    intervals.push_back(newInterval);
    return merge(intervals,intervals.size());
    //return v;

}
