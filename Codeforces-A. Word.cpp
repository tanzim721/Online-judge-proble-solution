#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int lower(0),upper(0);
    cin>>s;
    for(size_t i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            upper++;

        }
        else
        {
            lower++;
        }
    }
    if(lower<upper)
    {
        for(size_t i=0;i<s.length();i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for(size_t i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
