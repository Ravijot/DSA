#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void next_permutations(string s) 
{
        if(s.length()<=1)
	    {
		    return;
	    }
	    int n = s.length()-1;
	    int index1 = 0,index2=0;
	    for(index1=n-1;index1>=0;index1--)
	    {
		    if(s[index1]<s[index1+1])
		    {
			    break;
		    }
	    }
	    if(index1<0)
	    {
		    reverse(s.begin(),s.end());
	    }
	    else
	    {
		    for(index2=n;index2>index1;index2--)
		    {   
			    if(s[index2]>s[index1])
			    {
				    break;
			    }
		    }
            swap(s[index1],s[index2]);
	        reverse(s.begin()+index1+1,s.end()); 
	    }
	    cout<<s;
    }
int main()
{
    string s="123";
	next_permutations(s);
	return 0;
}
/*
Step 1: Start Traversing from end and find the index of element such that a[index1]<a[index1]
Step 2: Start Traversing from end and find the index of element such that a[index1]<a[index2] where index2>index1
Step 3: Swap the element a[index1] with a[index2]
Step 4: Reverse the array from index1+1 to end;
*/