#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0;

    cin>>n;
    int p[n+5],q[n+5];
    for(int i=0;i<n;i++){
        cin>>p[i]>>q[i];
        if((q[i]-p[i])>1)
        {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}
