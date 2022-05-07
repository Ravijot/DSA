#include<iostream>
#include<string>
using namespace std;
void printsub(string s,int i,int n,string output)
{
	if(i>=n)
	{
		cout<<output<<endl;
		return;
	}
	else
	{
		printsub(s,i+1,n,output);
	    output += s[i];
	    printsub(s,i+1,n,output);
	    return;
	}
	
}
int main()
{
	string s,output="";
	cin>>s;
	printsub(s,0,s.length(),output);
	return 0;
}
/*
Input - abc
Output 
c
b
bc
a
ac
ab
abc*/