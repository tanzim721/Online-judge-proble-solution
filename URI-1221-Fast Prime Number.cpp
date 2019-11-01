#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,test;
    long l;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l;
        test=0;
        if(l==0)
        {
            cout<<"Not Prime"<<endl;
            continue;
        }
        if(l==1)
        {
            cout<<"Not Prime"<<endl;
            continue;
        }
        if(l==2)
        {
            cout<<"Prime"<<endl;
            continue;
        }
        for(int j=2;j<sqrt(l)+1;j++)
        {
            if(l%j==0)
                test++;
                if(test==2)
                    break;
        }
        if(test>=1)
        {
            cout<<"Not Prime"<<endl;
        }
        else
        {
            cout<<"Prime"<<endl;
        }
    }

    return 0;
}
