#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isVowel(char ch) 
{ 
    return ( ch == 'a' || ch == 'e' ||  ch == 'i' || ch == 'o' || ch == 'u'); 
} 
  
// Function to calculate difficulty 
int calcDiff(std::vector<char> str) 
{ 
  
    int count_vowels = 0, count_conso = 0; 
    int hard_words = 0, easy_words = 0; 
    int consec_conso = 0; 
  
    // Start traversing the string 
    for (int i = 0; i < str.size(); i++) 
    { 
        // Check if current character is vowel 
        // or consonant 
        if (str[i] != ' ' && isVowel(tolower(str[i]))) 
        { 
            // Increment if vowel 
            count_vowels++; 
            consec_conso = 0; 
        } 
  
        else if (str[i]!= ' ') 
        { 
            count_conso++; 
            consec_conso++; 
        } 
  
        // If we get 4 consecutive consonants 
        // then it is a hard word 
        if (consec_conso == 4) 
        { 
            hard_words++; 
  
            // Move to the next word 
            while (i < str.size() && str[i]!= ' ') 
                i++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
  
        else if ( i < str.size() && 
                  (str[i] == ' ' || i == str.size()-1)) 
        { 
            
            count_conso > count_vowels ? hard_words++ : easy_words++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
    } 
  
    // Return difficulty of sentence 
    return 5 * hard_words + 3 * easy_words; 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isVowel(char ch) 
{ 
    return ( ch == 'a' || ch == 'e' ||  ch == 'i' || ch == 'o' || ch == 'u'); 
} 
  
// Function to calculate difficulty 
int calcDiff(std::vector<char> str) 
{ 
  
    int count_vowels = 0, count_conso = 0; 
    int hard_words = 0, easy_words = 0; 
    int consec_conso = 0; 
  
    // Start traversing the string 
    for (int i = 0; i < str.size(); i++) 
    { 
        // Check if current character is vowel 
        // or consonant 
        if (str[i] != ' ' && isVowel(tolower(str[i]))) 
        { 
            // Increment if vowel 
            count_vowels++; 
            consec_conso = 0; 
        } 
  
        else if (str[i]!= ' ') 
        { 
            count_conso++; 
            consec_conso++; 
        } 
  
        // If we get 4 consecutive consonants 
        // then it is a hard word 
        if (consec_conso == 4) 
        { 
            hard_words++; 
  
            // Move to the next word 
            while (i < str.size() && str[i]!= ' ') 
                i++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
  
        else if ( i < str.size() && 
                  (str[i] == ' ' || i == str.size()-1)) 
        { 
            
            count_conso > count_vowels ? hard_words++ : easy_words++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
    } 
  
    // Return difficulty of sentence 
    return 5 * hard_words + 3 * easy_words; 
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		std::vector<char> v;
		char c;
		while((c=getchar())&&c!='\n')
		{
			v.push_back(c);
		}
		cout<<calcDiff(v)<<"\n";
		
	}

}
	ll t;
	cin>>t;
	while(t--)
	{
		std::vector<char> v;
		char c;
		while((c=getchar())&&c!='\n')
		{
			v.push_back(c);
		}
		cout<<calcDiff(v)<<"\n";
		
	}

}