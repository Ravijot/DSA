#include<iostream>
#include<string>
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
bool isPalindrome(string st)
{
	int i = 0;
	int j = st.length()-1;
	while(i<=j)
	{
		if(st[i]!=st[j])
		{
			return false;
		}
		else
		{
			i++;
			j--;
		}
	}
	return true;
}
int main()
{
	string s;
	s = "abcc";
	for(int i=0;i<s.length();i++)
	{
		for(int j=i;j<s.length();j++)
		{
			string st = substring(s,i,j);
			if(isPalindrome(st)==true)
			{
				cout<<st<<endl;
			}
		}
	}
	return 0;
}
/*
	a b c c 
	0 1 2 3 
	a
	ab
	abc
	abcc
	b
	bc
	bcc
	c
	cc
	c
*/