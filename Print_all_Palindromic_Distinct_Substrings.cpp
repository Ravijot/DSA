#include<iostream>
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
bool isPalindrome(string st)
{
	int i = 0;
	int j = st.length()-1;
	while(i<j)
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
	s = "abaaa";
	set<string> hash;
	for(int i=0;i<s.length();i++)
	{
		for(int j=i;j<s.length();j++)
		{
			string st = substring(s,i,j);
			
			if(isPalindrome(st)==true)
			{
				hash.insert(st);
			}
		}
	}
	
	for(auto i:hash)
	{
			cout<<i<<endl;
	}
	return 0;
}
