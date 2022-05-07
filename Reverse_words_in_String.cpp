#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string reverseWords(string s) 
{
    string word ="";
    vector<string> v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            v.push_back(word);
            word ="";
        }
        else
        {
            word += s[i];
        }
    }
    v.push_back(word);
    for(int i=0;i<v.size();i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    string ans="";
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
            ans += v[i];
        }
        else
        {
            ans += v[i];
            ans += ' ';
        }
    }
    return ans;
}
int main()
{
	string s;
	getline(cin,s);
	cout<<reverseWords(s); 
	return 0;
}
// Input - Good Morning 
// Output - dooG gninroM