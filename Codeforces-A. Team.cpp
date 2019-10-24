#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0,sum;
    cin>>n;
    int arr[100];
    while(n--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sum=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]==1)
                sum++;
        }
        if(sum>=2)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
