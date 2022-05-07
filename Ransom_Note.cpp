/*
Given two strings ransomNote and magazine, return true 
if ransomNote can be constructed from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true*/
#include<iostream>
#include<string>
using namespace std;
bool canConstruct(string ransom, string magazine) 
{
    int char1[26] = {0};
    int char2[26] = {0};
    for(int i=0;i<ransom.length();i++)
    {
        char1[ransom[i]-'a']++;
    }
    for(int i=0;i<magazine.length();i++)
    {
        char2[magazine[i]-'a']++;
    }
    bool check = true;
    for(int i=0;i<ransom.length();i++)
    {
        if(char1[ransom[i]-'a'] <= char2[ransom[i]-'a'])
        {
            continue;
        }
        else
        {
            check = false;
            break;
        }
    }
    return check;
}
int main()
{
    string r,m;
    cin>>r>>m;
    cout<<canConstruct(r,m);
    return 0;
}