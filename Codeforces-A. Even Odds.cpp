#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int n,k,part,r;

    cin>>n>>k;

    if(n%2==0)
    {
        part = n/2;
    }
    else
    {
        part = (n+1)/2;
    }
    if(k<=part)
    {
        r = 2*k - 1;
    }
    else
    {
        r = (k-part)*2;
    }

    cout<<r<<endl;

    return 0;
}
