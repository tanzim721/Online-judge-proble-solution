#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int m,n,a,l,k;

    cin>>m>>n>>a;

    if(m%a==0)
    {
        l = m/a;
    }
    else
    {
        l = (m/a)+1;
    }

    if(n%a==0)
    {
        k = n/a;
    }
    else
    {
        k = (n/a)+1;
    }

    cout<<l*k<<endl;

    return 0;

}
