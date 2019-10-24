#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a[100],x,y,c=0,b=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
            x=i;
        }
        else
        {
            b++;
            y=i;
        }

    }
    if(c==1)
        {
            cout<<x<<endl;
        }
    else if(b==1)
        {
            cout<<y<<endl;
        }

    return 0;

}
