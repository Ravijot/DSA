#include <iostream>
#include <vector>
#include<string>
#include<set>
using namespace std;
string substring(string s,int i ,int j)
{
	string k = "";
	for(int n=i;n<=j;n++)
	{
		k += s[n];
	}
	return k;
}
int isPalindrome(string s,int i,int j,vector<vector<int>> &dp)
{
	 if(i>j)
	 {
        return 1;
	 }  
     if(dp[i][j]!=-1)
	 {
        return dp[i][j];
	 }  
     if(s[i]!=s[j])
     {   
		 return dp[i][j]=0;
	 }
      return dp[i][j]=isPalindrome(s,i+1,j-1,dp);
}
int main() 
{
	string s="geek";
	int n = s.length();
	vector<vector<int>> dp(n, vector<int> (n, -1));
	
	set<string> ans;
	for(int i=0;i<s.length();i++)
	{
		for(int j=i;j<s.length();j++)
		{
			if(isPalindrome(s,i,j,dp)==1)
			{
				string st = substring(s,i,j);
				ans.insert(st);
				
			}
		}
	}
	for(auto i:ans)
	{
			cout<<i<<endl;
	}
	return 0;
}