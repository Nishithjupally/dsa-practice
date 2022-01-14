int isPrime(int x)
{
	int count = 0;
	for (int i = 2; i < x; ++i)
	{
		if (x%i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		return 1;
	}
	return 0;
}

vector<int> Solution::primesum(int A) {
	std::vector<int> v;
	for (int i = 2; i < A; ++i)
	{
		if (isPrime(i))
		{
			if (isPrime(A-i))
			{
				v.push_back(i);
				v.push_back(A-i);
				return v;

			}
		}
	}
}
