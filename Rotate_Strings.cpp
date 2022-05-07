/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false  */

#include<iostream>
#include<string>
using namespace std;
bool rotateString(string s, string goal) 
{
    if(s.length()==0 || goal.length()==0)
    {
        return false;
    }
    if(s == goal)
    {
        return true;
    }
    int n = s.length() -1 ;
    bool check = false;
    for(int i=0;i<=n;i++)
    {
        char temp = s[0];
        for(int i=0;i<n;i++)
        {
            s[i] = s[i+1];
        }
        s[n] = temp;
        if(s==goal)
        {
            check = true;
            break;
        }
    }
    return check;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<rotateString(a,b);
    return 0;
}
