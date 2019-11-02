#include<bits/stdc++.h>
using namespace std;
string a,b="hello";
int j=0,p=0;
int main()
{

    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[j])
        {
            j++;
            p++;
            if(p==5)
                break;
        }

    }
    if(p==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
