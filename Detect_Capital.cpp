/*
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false*/

#include<iostream>
#include<string>
using namespace std;
bool detectCapitalUse(string word) 
{
    int upper=0,lower=0,capital=0;
    if(word.length()==1)
    {
        return true;
    }
    if(word[0]>='A' && word[0]<='Z')
    {
        capital++;
    }
    for(int i=1;i<word.length();i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            lower++;
        }
        else if(word[i]>='A' && word[i]<='Z')
        {
            upper++;
        }
    }
    if(upper+capital==word.length() || lower+capital==word.length())
    {
        return true;
    }
    if(capital==0 && lower == word.length()-1)
    {
        return true;
    }
    return false;
}
int main()
{
    string word;
    cin>>word;
    cout<<detectCapitalUse(word);
    return 0;
}