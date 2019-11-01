#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,s1;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]=='a' || s[i]=='o' || s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I')
        {
            continue;
        }
        else
        {
            s1 += '.';
            s1 += tolower(s[i]);
        }

    }
    cout<<s1;

    return 0;

}
