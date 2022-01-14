#include <bits/stdc++.h>
#include <string>
#include <cstring>


using namespace std;

void reverse(char* begin,char* end)
{
	char temp;
	while(begin<end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

void reverseWords(char* s)
{
	char* word_begin = s;

	char* temp = s;

	while(*temp)
	{
		temp++;
		if (*temp == '\0')
		{
			reverse(word_begin, temp - 1);
		}
		else if(*temp == ' ')
		{
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	}
	reverse(s,temp-1);
}

int main()
{
	string str;
	cin>>str;
	char carr[str.size()+1];
	str.copy(carr,str.size()+1);
	carr[str.size()] = '\0';
	reverseWords(carr);
	//cout<<carr;
	for (int i = 0; i < str.size(); ++i)
	{
		cout<<carr[i];
	}

}