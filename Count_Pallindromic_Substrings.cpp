/*
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
*/

#include<iostream>
#include<string>
using namespace std;
 int countSubstrings(string s) 
    {
        if(s.length()==1)
        {
            return 1;
        }
        int n = s.length();
        bool dp[n][n] ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j] = false;
            }
        }
        int count = 0;
        for(int g=0;g<n;g++)
        {
	        for(int i=0,j=g;j<n;i++,j++)
	        {
		        if(g==0)
		        {
			        dp[i][j] = true;
		        }
		        else if(g==1)
		        {
			        if(s[i] == s[j])
			        {
				        dp[i][j] = true;
			        }
			        else
			        {
				        dp[i][j] = false;
			        }
		        }
		        else
		        {
			        if(s[i] == s[j] && dp[i+1][j-1] == true)
			        {
				        dp[i][j] = true;
			        }
			        else
			        {
				        dp[i][j] = false;
			        }
		        }
		        if(dp[i][j]==true)
		        {
			        count++;
		        }
	        }
	
        }
        return count;    
    }
int main()
{
    string s;
    cin>>s;
    cout<<countSubstrings(s);
    return 0;
}