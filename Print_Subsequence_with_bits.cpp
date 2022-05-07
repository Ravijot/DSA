#include<iostream>
#include<cstring>
using namespace std;
void filterchars(int n,char a[])
{
	int j=0;
	while(n>0)
	{
		int lastbit=(n&1);
		if(lastbit==1)
		{
			cout<<a[j];
		}
		j++;
		n=n>>1;
		
	}
	cout<<endl;
	
}
void printsets(char a[])
{
	int n=strlen(a);
	for(int i=0;i<(1<<n);i++)
	{
		filterchars(i,a);
	}
	
	return;
}
int main()
{

	char a[100];
	cin>>a;
	printsets(a);
	return 0;
}
