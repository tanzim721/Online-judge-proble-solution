#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int t=0;


    int one=0,zero=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one++;
            zero=0;
        }
        else
        {
            zero++;
            one=0;
        }
        if(one==7 || zero==7)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
