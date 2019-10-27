#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum=0;
    long double avg;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum += arr[i];
    }
    avg = (long double) sum/n;
    cout<<avg<<endl;
    return 0;

}
