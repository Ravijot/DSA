#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutations(string s,vector<string>& ans, int i)
{
    if(i>=s.length())
    {
        ans.push_back(s);
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permutations(s,ans,i+1);
        swap(s[i],s[j]);
    }
}
int main()
{
	string s;
	cin>>s;
	vector<string> ans;
	permutations(s,ans,0);
	for(auto i:ans)
	{
		cout<<i<<endl;
	}
	return 0;
}
/*
Input - 123
Output 
123
132
213
231
321
312*/