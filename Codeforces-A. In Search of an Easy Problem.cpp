#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],cnt=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1){
            cnt++;
            break;
        }
    }

        if(cnt==1)
        {
            cout<<"HARD"<<endl;
        }
        else if(cnt==0)
        {
            cout<<"EASY"<<endl;
        }

    return 0;
}
