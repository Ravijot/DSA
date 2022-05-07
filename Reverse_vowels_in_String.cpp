#include<iostream>
#include<string>
using namespace std;
bool check(char a)
{
    if(a=='a' || a=='e' || a=='i' || a=='o' ||a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        return true;
    }
    return false;
}
string reverseVowels(string s) 
{
    if(s.length() == 1)
    {
        return s;
    }
    int i = 0;
    int j = s.length()-1;
    while(i<j)
    {
        if(!check(s[i]))
        {
            while(i<j && !check(s[i]))
            {
                i++;
                  }
            }
            if(!check(s[j]) )
            {
                while(j>i && !check(s[j]))
                {
                    j--;
                }
            }
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }    
        return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<reverseVowels(s);
    return 0;
}