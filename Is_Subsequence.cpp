/*
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
*/
#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t) 
{
    int i=0,j=0;
    while(i<s.length() && j<t.length())
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else if(s[i]!=t[j])
        {
            j++;
        }
    }
    if(i==s.length())
    {
        return true;
    }
    else
    {
        return false;
    }
       
}
int main()
{
	string s="abc";
	string t="ahbgdc";
	cout<<isSubsequence(s,t);
	return 0;
}