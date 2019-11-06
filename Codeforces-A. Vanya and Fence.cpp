#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[1000],h,n;
    int c=0;
    cin>>n>>h;

    for(int i=1;i<=n;i++)
    {

        cin>>a[i];

        if(a[i]>h)
        {
            c+=2;
        }
        else
        {
            c++;
        }

    }
    cout<<c<<endl;

    return 0;

}
