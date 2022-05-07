#include<iostream>
#include<string>
using namespace std;
string addStrings(string num1, string num2) 
    {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0,sum=0;
        string ans;
        while(i>=0 && j>=0)
        {
            int a = num1[i]-'0';
            int b = num2[j]-'0';
            sum = a+b+carry;
            int r = sum%10;
            ans += '0'+r;
            carry = sum/10;
            i--;
            j--;
        }
         
        while(i>=0)
        {
            int a = num1[i] - '0';
            sum = a + carry;
            int r = sum%10;
            ans += '0'+r;
            carry = sum/10;
            i--;
        }
        
        while(j>=0)
        {
            int a = num2[j] - '0';
            sum = a + carry;
            int r = sum%10;
            ans += '0'+r;
            carry = sum/10;
            j--;
        }
        if(i==-1 && j==-1 && carry==1)
        {
            ans += '0'+carry;
        }
        int n = 0;
        int m = ans.length()-1;
        while(n<m)
        {
            char temp = ans[n];
            ans[n] = ans[m];
            ans[m] =temp;
            n++;
            m--;
        }
        return ans;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<addStrings(a,b);
    return 0;
}
