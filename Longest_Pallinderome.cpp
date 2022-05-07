/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Example 3:

Input: s = "bb"
Output: 2
Input: s="abccccAAdd"
Output:9
*/

#include <iostream>
#include<string>
using namespace std;
int longestPalindrome(string s) 
{
    if(s.length()==1)
    {
        return 1;
    }
    int ch1[26]={0};
    int ch2[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            ch1[s[i]-'A']++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            ch2[s[i]-'a']++;
        }
    }
    int odd = 0;
    int even = 0;
    for(int i=0;i<26;i++)
    {
        if(ch1[i]%2==1 && ch1[i]>odd)
        {
            even += ch1[i]-1;
            ch1[i] = ch1[i] - (ch1[i]-1);
            if(ch1[i]>odd)
            {
                odd = ch1[i];
            }
        }
        else if(ch1[i]%2==0 )
        {
            even += ch1[i];
        }
        if(ch2[i]%2==1 && ch2[i]>odd)
        {
            even += ch2[i]-1;
            ch2[i] = ch2[i] - (ch2[i]-1);
            if(ch2[i]>odd)
            {
                odd = ch2[i];
            }
        }
        else if(ch2[i]%2==0)
        {
            even += ch2[i];
        }
    }
    if(even==s.length())
    {
        return even;
    }
    else
    {
        return even+odd;
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
    return 0;
}