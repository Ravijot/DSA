#include<iostream>
#include<string>
#include<set>
using namespace std;
void printsub(string s,int i,int n,string output,set<string>& st)
{
	if(n==0)
	{
		return;
	}
	if(i>=n && st.find(output) == st.end())
	{
		st.insert(output);
		return;
	}
	else
	{
		printsub(s,i+1,n,output,st);
	    output += s[i];
	    printsub(s,i+1,n,output,st);
	    return;
	}
	
}
int main()
{
	string s,output="";
	cin>>s;
	set<string> st;
	printsub(s,0,s.length(),output,st);
	for(auto i:st)
	{
		cout<<i<<endl;
	}
	return 0;
}