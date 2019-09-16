#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s=0,t;
    string arr;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>arr;
        if(arr=="donate")
        {
            cin>>n;
            s = s + n;
        }
        else
             cout<<s<<endl;
    }
    return 0;
}
