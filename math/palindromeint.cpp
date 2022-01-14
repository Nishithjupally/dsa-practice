int Solution::isPalindrome(int A) {
    int temp = A;
    std::vector<int> v;
    count = 0;
    while(temp != 0)
    {
    	v.push_back(temp%10);
    	count++;
    	temp = temp/10;
    }
    int temp2 = 0;
    for (int i = 0; i < v.size(); ++i)
    {
    	temp2+=v[i]*pow(10,count-1-i);
    }
    if (temp2 == A)
    {
    	return 1;
    }
    return 0;
}

int reverse(int A) {
    int rev=0;
    while(A>0) {
        rev=rev*10+A%10;
        A=A/10;
    }
return rev;
}

int Solution::isPalindrome(int A) {
   return A==reverse(A);
}
